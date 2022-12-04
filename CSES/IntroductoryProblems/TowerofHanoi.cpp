#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n;
vector<ar<char,2>> ans;
void dfs(int n,char a,char b,char c){
	if(n==0) return;
	dfs(n-1,a,c,b);
	ans.push_back({a,c});
	dfs(n-1,b,a,c);
}

void solve(){
	cin>>n;
	dfs(n,'1','2','3');
	cout<<ans.size()<<"\n";
	for(ar<char,2> i:ans){
		cout<<i[0]<<" "<<i[1]<<"\n";
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