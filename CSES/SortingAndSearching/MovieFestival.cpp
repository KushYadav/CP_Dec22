#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n;
ar<int,2> a[mxN];
void solve(){
	cin>>n;
	for(int i=0;i<n;i++){
		int s,e;
		cin>>s>>e;
		a[i] = {e,s};
	}
	sort(a,a+n);

	int end = -1;
	int ans = 0;
	for(int i=0;i<n;i++){
		if(a[i][1]>=end){
			end = a[i][0];
			ans++;
		}
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