#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

ll n;
void solve(){
	cin>>n;
	vector<int> v1,v2;
	ll cs = n*(n+1)/2;
	if(cs&1){
		cout<<"NO SOLUTION";
		return;
	}else{
		cout<<"YES\n";
		cs/=2;
		for(int i=n;i>=1;i--){
			if(cs-i>=0){
				v1.push_back(i);
				cs-=i;
			}else{
				v2.push_back(i);
			}
		}
	}
	cout<<v1.size()<<"\n";
	for(int i:v1) cout<<i<<" ";
	cout<<"\n"<<v2.size()<<"\n";
	for(int i:v2) cout<<i<<" ";

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