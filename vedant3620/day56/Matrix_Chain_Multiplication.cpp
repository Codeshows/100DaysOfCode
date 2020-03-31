#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main()
 {
    test(){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        ll dp[n-1][n-1];
        for(ll i=0;i<n-1;i++){
            for(ll j=0;j<n-1;j++){
                if(i==j)dp[i][j]=0;
                else dp[i][j]=1e9;
            }
        }
        for(ll l=1;l<n-1;l++){
            for(ll i=0;i<n-l-1;i++){
                ll j=i+l;
                    for(ll k=i;k<j;k++){
                        dp[i][j]=min(dp[i][j],(dp[i][k]+dp[k+1][j]+(a[i]*a[k+1]*a[j+1])));
                    }
            }
        }
        cout<<dp[0][n-2]<<endl;
    }
	return 0;
}