#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

string s;
bool vis[8];
vector<string> ans;
void dfs(string psf){
	if(psf.size()==s.size()){
		ans.push_back(psf);
		return;
	}
	vector<int> f(256);
	for(int i=0;i<s.size();i++){
		if(!vis[i]&&!f[s[i]]){
			vis[i]=1;
			f[s[i]]=1;
			dfs(psf+s[i]);
			vis[i]=0;
		}
	}
}

void solve(){
	cin>>s;
	sort(s.begin(),s.end());
	memset(vis,0,sizeof(vis));
	dfs("");
	cout<<ans.size()<<"\n";
	for(string ss:ans) cout<<ss<<"\n";
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