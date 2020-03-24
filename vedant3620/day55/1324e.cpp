#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

ll isBetween(ll l,ll r,ll x) {
	if(x>=l&&x<=r)return 1;
	else return 0;
}

int main() {
    SPEED;
    //CODE
	ll n,h,l,r;
	cin>>n>>h>>l>>r;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	ll dp[n+1][h]={0};
	for(ll i=0;i<=n;i++){
		for(ll j=0;j<h;j++){
			dp[i][j]=-1;
		}
	}
	for(ll i=0;i<=n;i++){
		for(ll j=0;j<h;j++){
			if(i==0){
				if(j==0)dp[i][j]=0;			
			}
			else{
				if(dp[i-1][j]!=-1){
					if(isBetween(l,r,(j+a[i-1])%h)){
						dp[i][(j+a[i-1])%h]=max(dp[i][(j+a[i-1])%h],dp[i-1][j]+1);
					}
					else{
						dp[i][(j+a[i-1])%h]=max(dp[i][(j+a[i-1])%h],dp[i-1][j]);
					}
					if(isBetween(l,r,(j+a[i-1]-1)%h)){
						dp[i][(j+a[i-1]-1)%h]=max(dp[i][(j+a[i-1]-1)%h],dp[i-1][j]+1);
					}
					else{
						dp[i][(j+a[i-1]-1)%h]=max(dp[i][(j+a[i-1]-1)%h],dp[i-1][j]);
					}
				}
			}
		}
	}
	ll ans=0;
	for(ll i=0;i<h;i++){
		ans=max(ans,dp[n][i]);
	}
	cout<<ans;
	return 0;
}
