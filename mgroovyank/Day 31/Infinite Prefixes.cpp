#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    ll n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    ll total = 0;
    for(ll i=0;i<n;i++){
      if(s[i] == '0'){
        total++;
      }else{
        total--;
      }
    }
    ll bal = 0;
    bool isInf = false;
    ll ans = 0;
    for(ll i=0;i<n;i++){
      if(total == 0){
        if(bal == x){
          isInf = true;
          break;
        }
      }else if(abs(x-bal)%abs(total) == 0){
        if((x-bal)/total >=0){
          ans++;
        }
      }
      if(s[i] == '0'){
        bal++;
      }else{
        bal--;
      }
    }
    if(isInf){ ans = -1; }
    cout<<ans<<"\n";
  }
}
