#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll gcd(ll a, ll b){
  if(b == 0){
    return a;
  }
  return gcd(b, a%b);
}
ll phi(ll num){
  ll ans = num;
  ll d = 2;
  while(d*d<=num){
    ll cnt = 0;
    while(num%d == 0){
      num= num/d;
      cnt++;
    }
    if(cnt>0){
      ans = ans - ans/d;
    }
    d++;
  }
  if(num>1){
    ans = ans - ans/num;
  }
  return ans;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    ll a, m;
    cin>>a>>m;
    ll gd = gcd(a, m);
    cout<<phi(m/gd)<<"\n";
  }
}
