#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    string s, t;
    cin>>s>>t;
    int n = s.length();
    vector<vector<int> >nxt(n+1, vector<int>(26, INF));
    for(int i=n-1;i>=0;i--){
      for(int j=0;j<26;j++){
        nxt[i][j] = nxt[i+1][j];
      }
      nxt[i][s[i]-'a'] = i;
    }
    int res = 1, pos = 0;
    for(int i=0;i<t.length();i++){
      if(pos == n){
        pos = 0;
        res++;
      }
      if(nxt[pos][t[i] - 'a'] == INF){
        pos = 0;
        res++;
      }
      if(nxt[pos][t[i] - 'a'] == INF && pos == 0){
        res = INF;
        break;
      }
      pos = nxt[pos][t[i] - 'a'] + 1;
    }
    if(res>=INF){
      cout<<-1<<"\n";
    }else{
      cout<<res<<"\n";
    }
  }
}
