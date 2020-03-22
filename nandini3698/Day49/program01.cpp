#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      test{
            ll n;
            cin>>n;
            if(n==1)
                  cout<<"-1"<<"\n";
            else{
                  cout<<"2";
                  n--;
                  while(n){
                        cout<<"3";
                        n--;
                  }
                  cout<<"\n";
            }
      }
      return 0;