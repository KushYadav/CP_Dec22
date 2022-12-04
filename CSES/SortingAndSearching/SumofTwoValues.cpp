#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n,x;
ar<int,2> a[mxN];
void solve(){
	cin>>n>>x;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a[i]={x,i};
	}

	sort(a,a+n);
	int l=0,r=n-1;
	while(l<r){
		if(a[l][0]+a[r][0]>x){
			r--;
		}else if(a[l][0]+a[r][0]<x){
			l++;
		}else{
			cout<<a[l][1]+1<<" "<<a[r][1]+1;
			return;
		}
	}
	cout<<"IMPOSSIBLE";
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