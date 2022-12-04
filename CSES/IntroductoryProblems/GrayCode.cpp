#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n;
vector<string> v={"0","1"};
void solve(){
	cin>>n;

	for(int i=2;i<=n;i++){
		vector<string> v1;
		for(string s:v){
			v1.push_back("0"+s);
		}
		for(int i=v.size()-1;i>=0;i--){
			v1.push_back("1"+v[i]);
		}
		v=v1;
	}
	for(string s:v) cout<<s<<"\n";
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