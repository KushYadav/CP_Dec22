#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using oset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n;
ar<int,3> a[mxN];
int b[mxN],c[mxN];
oset<ar<int,2>> s1,s2;
void solve(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1];
		a[i][2]=i;
	}

	sort(a,a+n,[&](const ar<int,3> l,const ar<int,3> r){
		return (l[0]<r[0])||(l[0]==r[0] && l[1]>r[1]);
	});

	for(int i=n-1;i>=0;i--){
		b[a[i][2]] = s1.order_of_key({a[i][1]+1,-1});
		s1.insert({a[i][1],i});
	}

	for(int i=0;i<n;i++){
		c[a[i][2]] = i-s2.order_of_key({a[i][1],-1});
		s2.insert({a[i][1],i});
	}

	for(int i=0;i<n;i++) cout<<(b[i]>0)<<" ";
	cout<<"\n";
	for(int i=0;i<n;i++) cout<<(c[i]>0)<<" ";
	cout<<"\n";
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int tc=1;
	// cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}