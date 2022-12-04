#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

void solve(){
	int x = 2;
	for(int i=0;i<1000;i++){
		cout<<i<<"-"<<(i+x-1)/x*x<<"\n";
	}	
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int tc=1;
	cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}