#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,m;
    cin>>n>>m;
    ll a[n],b[100001]={0};
    for(ll i=0;i<n;i++){
        cin>>a[i];

    }
    ll dp[n+1]={0};
    for(ll i=n-1;i>=0;i--){
        if(b[a[i]]==1){
            dp[i]=dp[i+1];
        }
        else{
            b[a[i]]=1;
            dp[i]=dp[i+1]+1;
        }
    }
    ll t;
    for(ll i=0;i<m;i++){
        cin>>t;
        cout<<dp[t-1]<<endl;
    }
    return 0;
}
