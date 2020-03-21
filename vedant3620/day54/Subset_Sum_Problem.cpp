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
            if(dp[0][j]==1){
                if(j+a[i]<=sum){
                    dp[1][j+a[i]]=1;
                }
                dp[1][j]=1;
            }
        }
        if(dp[1][sum]==1)return 1;
        for(ll j=0;j<=sum;j++)dp[0][j]=dp[1][j];
    }
    return 0;
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
            sum+=a[i];
        }
        if(sum%2==1){
            cout<<"NO"<<endl;
        }
        else{
            if(subsetSum(a,n,sum/2)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
	return 0;
}