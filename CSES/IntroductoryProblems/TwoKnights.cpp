#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n;
void solve(){
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll ans = (i*i)*(i*i-1)/2;
		ans -= 4*(i-1)*(i-2);
		cout<<ans<<"\n";
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