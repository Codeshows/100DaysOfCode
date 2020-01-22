// https://codeforces.com/contest/1293/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  float ans = 0.0;
  while(n!=0){
    ans = ans + 1.0/n;
    n--;
  }
  cout<<ans;
}
