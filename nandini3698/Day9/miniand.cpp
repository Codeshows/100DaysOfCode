#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
int main(){
    test{
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll dp[n+1];
        dp[0]=0;
        
        for(ll i=1;i<=n;i++){
            if(a[i-1]%2==0)
                dp[i]=dp[i-1]+1;
            else
                dp[i]=dp[i-1];
        }

        ll q;
        cin>>q;
        while(q--){
            ll l,r;
            cin>>l>>r;
            if(dp[r]==dp[l-1])
                cout<<"ODD"<<endl;
            else
                cout<<"EVEN"<<endl;
        }
    }
}