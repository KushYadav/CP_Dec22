#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

string g[8];
int a[8];
bool vis[15];
void solve(){
	for(int i=0;i<8;i++) cin>>g[i];

	iota(a,a+8,0);
	ll ans = 0;
	do{
		bool ok = true;
		memset(vis,0,sizeof(vis));
		for(int i=0;i<8;i++){
			if(g[i][a[i]]=='*') ok =false;

		}
		memset(vis,0,sizeof(vis));
		for(int i=0;i<8;i++){
			if(vis[i+a[i]]) ok=false;
			vis[i+a[i]] = 1;
		}

		memset(vis,0,sizeof(vis));
		for(int i=0;i<8;i++){
			if(vis[i-a[i]+7]) ok=false;
			vis[i-a[i]+7] = 1;
		}
		ans+=ok;
	}while(next_permutation(a,a+8));
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