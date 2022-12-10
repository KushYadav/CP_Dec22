#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n,a[mxN];
map<int,int> mp;
void solve(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];

	for(int i=0;i<n;i++){
		auto it = mp.upper_bound(a[i]);		
		if(it!=mp.end()){
			mp[it->first]--;
			if(mp[it->first]==0) mp.erase(it->first);
		}
		mp[a[i]]++;
	}
	int ans = 0;
	for(auto it:mp){
		ans+=it.second;
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