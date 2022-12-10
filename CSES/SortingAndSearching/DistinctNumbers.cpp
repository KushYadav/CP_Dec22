#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n;
set<int> s;
void solve(){
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		s.insert(x);
	}
	cout<<s.size();
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