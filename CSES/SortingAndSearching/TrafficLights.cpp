#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n,q;
set<int> s;
map<int,int> mp;
void solve(){
	cin>>n>>q;

	s.insert(0);
	s.insert(n);
	mp[n]=1;

	while(q--){
		int x;
		cin>>x;

		int l = *(--s.lower_bound(x));
		int r = *s.upper_bound(x);

		mp[r-l]--;
		if(mp[r-l]==0) mp.erase(r-l);

		mp[r-x]++;
		mp[x-l]++;
		s.insert(x);


		cout<<(--mp.end())->first<<" ";
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