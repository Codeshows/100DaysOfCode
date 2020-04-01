#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define input(a,n) for(ll i=0;i<n;i++) cin>>a[i]
int main() {
    SPEED;
    //CODE
	test(){
		ll n,w;
		cin>>n>>w;
		ll val[n],wt[n];
		input(val,n);
		input(wt,n);
		ll dp[w+1];
		memset(dp,0,sizeof(dp));
		for(ll i=0;i<=w;i++){
		    for(ll j=0;j<n;j++){
		        if(wt[j]<=i){
		            dp[i]=max(dp[i],dp[i-wt[j]]+val[j]);
		        }
		    }
		}
		cout<<dp[w]<<endl;
	}
	return 0;
}