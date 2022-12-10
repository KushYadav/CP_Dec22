#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

int n,m,k;
int a[mxN],b[mxN];
void solve(){
	cin>>n>>m>>k;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];

	sort(a,a+n);
	sort(b,b+m);

	int j=0;
	int ans =0;
	for(int i=0;i<m;i++){
		while(j<n && !(b[i]-k<=a[j]&&b[i]+k>=a[j]) && a[j]<b[i]+k){
			j++;
		}
		if((a[j]-k<=b[i]&&a[j]+k>=b[i])){
			j++;
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