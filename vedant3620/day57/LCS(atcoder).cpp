#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
string max(string a,string b){
	return a.length()>b.length()?a:b;
}
int main() {
    SPEED;
    //CODE
	string s,t;
	cin>>s>>t;
	ll m=s.length(),n=t.length();
	string dp[2][n+1];
	dp[0][0]="";
	for(ll i=0;i<=m;i++){
		for(ll j=0;j<=n;j++){
			if(j==0){
				dp[1][j]="";
			}
			else{
				if(s[i-1]==t[j-1]){
					dp[1][j]=dp[0][j-1]+s[i-1];
				}
				else{
					dp[1][j]=max(dp[0][j],dp[1][j-1]);
				}
			}
		}
		for(ll j=0;j<=n;j++){
			dp[0][j]=dp[1][j];
		}
	}
	cout<<dp[1][n];
	return 0;
}
