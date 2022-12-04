#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll factorial(int n){
	if(n==1) return 1;
	return n*factorial(n-1);
}

ll factorialFast(int n){
	ll ans = 1;
	for(int i=1;i<=n;i++){
		ans*=i;
	}
	return ans;
}

ll fibonacci(int n){
	if(n==0||n==1) return n;
	return fibonacci(n-1)+fibonacci(n-2);
}

ll fibonacciFast(int n){
	ll a = 0;
	ll b = 1;
	for(int i=0;i<n;i++){
		tie(a,b) = make_tuple(b,a+b);
	}
	return a;
}

void solve(){
	int n = 5;
	cout<<factorial(n)<<"\n";
	cout<<factorialFast(n)<<"\n";
	cout<<fibonacci(n)<<"\n";
	cout<<fibonacciFast(n)<<"\n";
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