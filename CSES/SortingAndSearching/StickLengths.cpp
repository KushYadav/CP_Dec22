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

	sort(a,a+n);
	int med = a[n/2];

	ll ans = 0;
	for(int i=0;i<n;i++){
		ans+=abs(a[i]-med);
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