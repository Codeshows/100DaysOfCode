#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
	ll n,W;
	cin>>n>>W;
	ll w[n],v[n];
	ll ans=0;
	for(ll i=0;i<n;i++) cin>>w[i]>>v[i];
	ll dp[2][100001];
	for(ll i=0;i<2;i++){
		for(ll j=0;j<100001;j++){
			dp[i][j]=10e9;
		}
	}
	dp[0][0]=0;
	for(ll i=1;i<=n;i++){
		for(ll j=0;j<100001;j++){
			if(dp[0][j]!=10e9){
				dp[1][j]=min(dp[1][j],dp[0][j]);
				dp[1][j+v[i-1]]=min(dp[1][j+v[i-1]],dp[0][j]+w[i-1]);
			}
		}
		for(ll j=0;j<100001;j++){
				dp[0][j]=dp[1][j];
		}
	}
	for(ll i=0;i<100001;i++){
			if(dp[1][i]<=W){
				ans=i;
			}
	}
	cout<<ans;
	return 0;
}
