#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5+1;

int n;
bool a[mxN];
void solve(){
	cin>>n;
	memset(a,0,sizeof(a));
	int ans = 0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(a[x-1]==0) ans++;
		a[x]=1;
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