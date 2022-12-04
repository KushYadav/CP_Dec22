#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int a,b;
void solve(){
	cin>>a>>b;
	if((a+b)%3==0 && abs(a-b)<=min(a,b)) cout<<"YES\n";
	else cout<<"NO\n";
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