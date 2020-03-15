#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      test{
      ll n;
      cin>>n;
      unordered_map<ll,ll>m;
      for(ll i=0;i<n;i++){
            ll x;cin>>x;
            if(m.find(x)==m.end()) m.insert(make_pair(x,1));
            else m[x]++;
      }
      cout<<m.size()<<"\n";
      }
      return 0;
}
 