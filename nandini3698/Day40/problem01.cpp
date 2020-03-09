//Codeforces: http://codeforces.com/contest/1323/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      test{
            ll n;
            cin>>n;
            ll a[n];
            ll e=0,o=0;
            for(ll i=0;i<n;i++)
                  cin>>a[i];
            for(ll i=0;i<n;i++){
                  if(a[i]%2==0){
                        cout<<"1"<<"\n";
                        cout<<(i+1)<<"\n";
                        break;
                  }
                  else
                        o++;
                  if(o==2){
                        cout<<"2"<<"\n";
                        cout<<"1"<<" "<<"2"<<"\n";
                        break;
                  }
            }
            if(n==1 && o==1){
                  cout<<"-1"<<"\n";
            }
            
      }
      return 0;
}
