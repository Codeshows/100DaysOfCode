#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      ll n,mx=0;
      cin>>n;
      ll b[n];
      for(ll i=0;i<n;i++)
            cin>>b[i];
      ll a[n];
      a[0]=b[0];
      mx=max(mx,a[0]);
      a[1]=b[1]+b[0];
      mx=max(mx,a[1]);
      cout<<a[0]<<" "<<a[1]<<" ";
      for(ll i=2;i<n;i++){
            a[i]=b[i]+mx;
            mx=max(mx,a[i]);
            cout<<a[i]<<" ";
      }
      return 0;
}