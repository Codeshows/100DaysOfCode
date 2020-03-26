#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      test{
            ll n,k;
            cin>>n>>k;
            ll r=1;
            ll c=2;
            while(r<k){
                  r=r+c;
                  c++;
            }
            ll p=k-(r-c+1);
            //cout<<c<<" "<<p;
            c=n-c;
            p=n-p;
            for(ll i=0;i<n;i++){
                  if(i==p || i==c)
                        cout<<"b";
                  else
                        cout<<"a";
            }
            cout<<"\n";
      }
 
      return 0;
}