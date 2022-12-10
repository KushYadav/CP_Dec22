#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n,a[mxN];
void solve(){
	cin>>n;
	ll cs = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cs+=a[i];
	}

	ll ans = INT_MAX;
	for(int i=0;i<(1<<n);i++){
		ll sum = 0;
		for(int j=0;j<n;j++){
			if(i&(1<<j)){
				sum+=a[j];
			}
		}
		ans = min(ans,abs(cs-2*sum));
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