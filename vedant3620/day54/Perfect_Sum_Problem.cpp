#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
ll subsetSum(ll a[],ll n,ll sum){
    ll dp[2][sum+1];
    for(ll i=0;i<2;i++) for(ll j=0;j<=sum;j++)dp[i][j]=0;
    dp[0][0]=1;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<=sum;j++){
            if(dp[0][j]>=1){
                if(j+a[i]<=sum){
                    dp[1][j+a[i]]+=dp[0][j];
                }
                dp[1][j]=max(dp[1][j],dp[0][j]);
            }
        }
        for(ll j=0;j<=sum;j++)dp[0][j]=dp[1][j];
    }
    return dp[1][sum];
}

int main()
 {
    test(){
        ll n;
        ll sum=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>sum;
        cout<<subsetSum(a,n,sum)<<endl;
    }
	return 0;
}
