#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

ll n;
void solve(){
	cin>>n;
	cout<<n<<" ";
	while(n!=1){
		if(n&1){
			n=3*n+1;
		}else{
			n/=2;
		}
		cout<<n<<" ";
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