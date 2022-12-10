#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n,a[mxN];
void solve(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];

	ll ans = 0;
	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]){
			ans+=a[i-1]-a[i];
			a[i]=a[i-1];
		}
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