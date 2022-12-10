#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

ll i,j;
void solve(){
	cin>>i>>j;

	ll mx = max(i,j);
	ll x = mx*(mx-1)+1;

	int ok = ((mx&1)&&i<j)||(!(mx&1)&&j<i);
	if(ok) cout<<x+abs(i-j)<<"\n";
	else cout<<x-abs(i-j)<<"\n";
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int tc=1;
	cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}