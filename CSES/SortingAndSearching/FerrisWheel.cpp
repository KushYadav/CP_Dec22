#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n,wt,a[mxN];
void solve(){
	cin>>n>>wt;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);

	int l=0,r=n-1;
	int ans = 0;
	while(l<=r){
		if(a[l]+a[r]<=wt) l++;
		r--;
		ans++;
	}
	cout<<ans;
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