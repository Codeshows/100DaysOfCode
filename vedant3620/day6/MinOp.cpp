#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main()
 {  
    ll dp[10001]={0};
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(ll i=3;i<=10000;i++){
        if(i%2==0){
            dp[i]=min(1+dp[i-1],1+dp[i/2]);
        }
        else{
            dp[i]=min(1+dp[i-1],2+dp[i/2]);
        }
    }
    test(){
        ll n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
	return 0;
}