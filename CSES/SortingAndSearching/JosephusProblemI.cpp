#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n;
queue<int> qu;
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++){
		qu.push(i);
	}

	int p=0;
	while(qu.size()){
		int x = qu.front();qu.pop();
		if(p&1){
			cout<<x<<" ";
		}else{
			qu.push(x);
		}
		p^=1;
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