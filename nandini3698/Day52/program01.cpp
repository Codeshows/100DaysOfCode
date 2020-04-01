#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      test{
            ll a,b;
            cin>>a>>b;
            if(a%b==0 && a>=b)
                  cout<<"0"<<"\n";
            else{
                if(a>b)
                    cout<<(b-(a%b))<<"\n";
                else
                    cout<<(b-a)<<"\n";
            }
      }
      return 0;
}