#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int x0, y0, ax, ay, bx, by;
  cin>>x0>>y0>>ax>>ay>>bx>>by;
  long long int xs, ys, t;
  cin>>xs>>ys>>t;
  vector<pair<long long int, long long int> >points;
  points.push_back(make_pair(x0, y0));
  long long LIMIT = (1LL << 62) - 1;
	while ((LIMIT - bx) / ax >= points.back().first && (LIMIT - by) / ay >= points.back().second) {
    long long int xi = ax * points.back().first + bx;
    long long int yi = ay * points.back().second + by;
    points.push_back(make_pair(xi, yi));
  }
  long long int ans = 0;
  for(long long int i=0;i<points.size();i++){
    for(long long int j=i;j<points.size();j++){
      long long int lx = points[i].first;
      long long int ly = points[i].second;
      long long int rx = points[j].first;
      long long int ry = points[j].second;
      long long int drl = abs(rx-lx) + abs(ry-ly);
      long long int dsl = abs(lx-xs) + abs(ly-ys);
      long long int dsr = abs(rx-xs) + abs(ry-ys);
      if(t-dsl>= drl || t-dsr>=drl){
        ans = max(ans, j-i+1);
      }
    }
  }
  cout<<ans;
}
