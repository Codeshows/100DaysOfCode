// Codeforces: http://codeforces.com/contest/1323/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      ll n;
      cin>>n;
      string str;
      cin>>str;
      if(n%2){
            cout<<"-1";
            return 0;
      }
      ll s=0,e=0;
      for(ll i=0;i<str.size();i++)
            if(str[i]=='(')
                  s++;
      e=n-s;
      if(s!=e){
            cout<<"-1";
            return 0;
      }
      ll t=0,st=0,i=0;
      ll c=0;
      while(i<str.size()){
            if(c==0 && str[i]==')')
                  st=1;
            if(str[i]=='(') c++;
            else c--;
            if(c<=0 && st==1)
                  t++;
            if(c==0) st=0;
            i++;
      }
      cout<<t;
      return 0;
}
