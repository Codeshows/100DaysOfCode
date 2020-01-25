
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,q;
  cin>>n>>q;
  vector<int> temp(n,1);
  vector<vector<int> > g(2, temp);
  int r,c;
  int blocked_pairs = 0;
  for(int i=0;i<q;i++){
    cin>>r>>c;
    r--;
    c--;
    g[r][c] = 1 - g[r][c];
    int delta = (g[r][c] == 1) ? -1 : +1;
    for(int j=-1;j<=1;j++){
      if(c+j<0 || c+j>=n){
        continue;
      }
      if(g[1-r][c+j] == 0){
        blocked_pairs += delta;
      }
    }
    cout << ((blocked_pairs == 0) ? "Yes\n" : "No\n");
  }
}
