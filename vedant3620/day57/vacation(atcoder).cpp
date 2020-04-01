#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
	ll n;
	cin>>n;
	ll a[n],b[n],c[n];
	for(ll i=0;i<n;i++) cin>>a[i]>>b[i]>>c[i];
	
	ll dp[n+1][3]={0};
	for(ll i=1;i<=n;i++){
		dp[i][0]=max(dp[i-1][1]+a[i-1],dp[i-1][2]+a[i-1]);
		dp[i][1]=max(dp[i-1][2]+b[i-1],dp[i-1][0]+b[i-1]);
		dp[i][2]=max(dp[i-1][0]+c[i-1],dp[i-1][1]+c[i-1]);
	}
	cout<<max(dp[n][0],max(dp[n][1],dp[n][2]));
	return 0;
}
