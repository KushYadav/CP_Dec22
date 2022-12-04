#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

string s;
bool vis[7][7];
ll ans = 0;
bool ok(int r,int c){
	return r>=0&&c>=0&&r<7&c<7&!vis[r][c];
}

void dfs(int idx,int r,int c){
	if(r==6 && c==0){
		if(idx==48) ans++;
		return;
	}
	vis[r][c]=1;
	if((s[idx]=='D'||s[idx]=='?')&&ok(r+1,c)&&!(!ok(r+2,c)&&ok(r+1,c+1)&&ok(r+1,c-1))){
		dfs(idx+1,r+1,c);
	}
	if((s[idx]=='R'||s[idx]=='?')&&ok(r,c+1)&&!(!ok(r,c+2)&&ok(r+1,c+1)&&ok(r-1,c+1))){
		dfs(idx+1,r,c+1);
	}
	if((s[idx]=='U'||s[idx]=='?')&&ok(r-1,c)&&!(!ok(r-2,c)&&ok(r-1,c+1)&&ok(r-1,c-1))){
		dfs(idx+1,r-1,c);
	}
	if((s[idx]=='L'||s[idx]=='?')&&ok(r,c-1)&&!(!ok(r,c-2)&&ok(r+1,c-1)&&ok(r-1,c-1))){
		dfs(idx+1,r,c-1);
	}
	vis[r][c]=0;
}

void solve(){
	cin>>s;
	dfs(0,0,0);
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