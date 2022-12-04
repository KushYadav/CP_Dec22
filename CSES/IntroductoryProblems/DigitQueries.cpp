#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

ll p[20];
int n;
void solve(){
	cin>>n;

	p[0]=1;
	for(int i=1;i<20;i++){
		p[i]=p[i-1]*10;
	}

	ll i=0;
	while(n>9*(i+1)*p[i]){
		n-=9*(i+1)*p[i];
		i++;
	}

	string s = to_string(p[i]-1+(n+i)/(i+1));
	cout<<s[(n+i)%(i+1)]<<"\n";
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