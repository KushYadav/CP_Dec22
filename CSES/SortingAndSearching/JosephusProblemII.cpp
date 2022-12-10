#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

 
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n,k;
ordered_set<int> s;
void solve(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) s.insert(i);

	int i=0;
	while(s.size()){
		i=(i+k)%s.size();
		auto it = s.find_by_order(i);
		cout<<*it<<" ";
		s.erase(it);
	}
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