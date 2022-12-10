#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MOD = 1e9+7;
const int mxN = 2e5;

string s;
int f[26];
void solve(){
	cin>>s;
	for(int i=0;i<s.size();i++) f[s[i]-'A']++;

	int to = 0;
	char sc = ' '; 
	for(int i=0;i<26;i++){
		if(f[i]&1){
			to++;
			sc=i+'A';
		}
	}

	if(to>1){
		cout<<"NO SOLUTION";
		return;
	}

	string s1;
	for(int i=0;i<26;i++){
		while(f[i]>1){
			s1+=i+'A';
			f[i]-=2;
		}
	}
	cout<<s1;
	if(sc!=' ') cout<<sc;
	reverse(s1.begin(),s1.end());
	cout<<s1;




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