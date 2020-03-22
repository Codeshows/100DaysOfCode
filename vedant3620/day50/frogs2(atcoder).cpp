#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	ll dp[n]={0};
	dp[1]=abs(a[1]-a[0]);
	for(ll i=2;i<n;i++){
		dp[i]=INT_MAX;
		for(ll j=max(0LL,i-k);j<i;j++){
			dp[i]=min(dp[i],dp[j]+abs(a[j]-a[i]));
		}
	}
	cout<<dp[n-1];
	return 0;
}
