#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

string s;
void solve(){
	cin>>s;
	int ans = 0;
	int l = 0;
	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1]) continue;
		ans = max(ans,i-l);
		l = i;
	}
	ans = max(ans,(int)s.size()-l);
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