#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      test{
            ll n;
            cin>>n;
            string s;
            cin>>s;
            string a="1";
            string b="1";
            for(ll i=1;i<n;i++){
                  if(s[i]=='0'){
                  a=a+"0";
                  b=b+"0";
                  }
                  else if(s[i]=='1'){
                        if(a==b){
                              a=a+"1";
                              b=b+"0";
                        }
                        else{
                              a=a+"0";
                              b=b+"1";
                        }
                  }
                  else{
                        if(a==b){
                              a=a+"1";
                              b=b+"1";
                        }
                        else{
                              a=a+"0";
                              b=b+"2";
                        }
                  }
            }
            cout<<a<<"\n";
            cout<<b<<"\n";
      }
 
      return 0;
} 