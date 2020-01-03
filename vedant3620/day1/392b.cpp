#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll min(ll a,ll b,ll c){
return min(min(a,b),c);
}
int main(){
    ll a[3][3];
    ll i,j,k;
    for(i=0;i<3;i++) for(j=0;j<3;j++) cin>>a[i][j];
    ll n;
    cin>>n;
    ll dp[n+1][3][3];
    memset(dp,-1,sizeof(dp));
    for(i=0;i<=n;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                if(j==k||i==0){
                    dp[i][j][k]=0;
                }
                else{
                    dp[i][j][k]=min(dp[i-1][j][3-j-k]+a[j][k]+dp[i-1][3-j-k][k],dp[i-1][j][k]+dp[i-1][k][3-j-k]+a[j][k]+dp[i-1][3-j-k][k],dp[i-1][j][k]+a[j][3-j-k]+dp[i-1][k][j]+a[3-j-k][k]+dp[i-1][j][k]);
                }
            }
        }
    }
    cout<<dp[n][0][2];
}
