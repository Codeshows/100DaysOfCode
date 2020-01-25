// https://codeforces.com/contest/1293

#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > tree, par, sub;
vector<vector<long long int> > dp;
int root;
void dfs(int node){
  sub[root][node] = 1;
  int l = tree[node].size();
  for(int i=0;i<l;i++){
    int adj_node = tree[node][i];
    if(par[root][node] == adj_node){
      continue;
    }
    par[root][adj_node] = node;
    dfs(adj_node);
    sub[root][node] += sub[root][adj_node];
  }
}
long long int get_dp(int u, int v){
  if(u == v){
    return 0;
  }
  if(dp[u][v]!=-1){
    return dp[u][v];
  }
  long long res = sub[u][v] * sub[v][u] + max(get_dp(par[v][u], v), get_dp(u, par[u][v]));
	return dp[u][v] = res;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  tree.assign(n, vector<int>());
  for(int i=0;i<n-1;i++){
    int u,v;
    cin>>u>>v;
    u--;
    v--;
    tree[u].push_back(v);
    tree[v].push_back(u);
  }
  par.assign(n, vector<int>(n,-1));
  sub.assign(n, vector<int>(n,-1));
  for(int i=0;i<n;i++){
    root = i;
    dfs(i);
  }
  dp.assign(n, vector<long long int>(n, -1LL));
  long long int ans = 0;
  for(int u=0;u<n;u++){
    for(int v=0;v<n;v++){
      ans = max(ans, get_dp(u,v));
    }
  }
  cout<<ans;
}
