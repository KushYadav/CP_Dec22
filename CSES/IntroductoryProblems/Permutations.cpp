#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n;
void solve(){
	cin>>n;
	if(n==2||n==3){
		cout<<"NO SOLUTION";
		return;
	}
	for(int i=1;i<=n;i++){
		if(!(i&1)) cout<<i<<" ";
	}
	for(int i=1;i<=n;i++){
		if(i&1) cout<<i<<" ";
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