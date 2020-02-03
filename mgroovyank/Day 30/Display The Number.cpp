// https://codeforces.com/contest/1295/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int ones = n/2;
    int rem = n%2;
    ones = ones - rem;
    string ans;
    while(ones--){
      ans+='1';
    }
    if(rem){
      ans = '7' + ans;
    }
    cout<<ans<<"\n";
  }
}
