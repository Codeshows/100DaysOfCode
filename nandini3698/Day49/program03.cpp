#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
#define mod 998244353
 
int main(){
      ll n,k,k1;
      cin>>n>>k;
      ll a[n];
      for(ll i=0;i<n;i++)
            cin>>a[i];
      k1=n-k;
      ll sum=((n*(n+1))/2)-((k1*(k1+1))/2);
      ll b[n+1]={};
      for(ll i=0;i<n;i++)
           if(a[i]>k1)
                  b[i+1]++;
      
      // for(ll i=1;i<=n;i++)
      //       cout<<b[i];
      
      ll cnt=1,r=0;
      for(ll i=1;i<=n;i++){
            if(b[i]){
                  r++;
                  if(r==k)
                        break;
                  ll t=0;
                  i++;
                  while(b[i]==0){
                        t++;i++;}
                  i--;
                  t++;
                  cnt=(cnt*t)%mod;
 
                  //cout<<cnt<<" ";
            }
      }
      cout<<sum<<" "<<cnt;
      return 0;
}
 