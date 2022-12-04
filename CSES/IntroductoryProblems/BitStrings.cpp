#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n;
void solve(){
	cin>>n;
	ll pow = 2;
	ll ans = 1;
	while(n){
		if(n&1){
			ans = ans*pow%MOD;
		}
		pow = pow*pow%MOD;
		n>>=1;
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