#include<bits/stdc++.h>
using namespace std;
 
int N;
int A[20];
int x[20][20];
int y[20][20];
 
int counter(int x) {
  if (x == 0) return 0;
  return counter(x >> 1) + (x & 1);
}
 
void solve() {
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
    for (int j = 1; j <= A[i]; j++) {
      cin >> x[i][j] >> y[i][j];
    }
  }
  int ans = 0;
  for (int bits = 1; bits < (1 << N); bits++) {
    bool ok = true;
    for (int i = 1; i <= N; i++) {
      if(!(bits & (1 << (i-1)))) continue;
      for (int j = 1; j <= A[i]; j++) {
        if(((bits >> (x[i][j] - 1)) & 1) ^ y[i][j]) ok = false;
      }
    }
    if(ok) ans = max(ans, counter(bits));
  }
  cout << ans << endl;
  return;
}
int main()
{
  solve();
  return 0;
}

/*
There are  N people numbered  1 to  N . Each of them is either an 
honest person whose testimonies are always correct or an unkind person whose
testimonies may be correct or not. Person  i gives  Ai testimonies. The 
j-th testimony by Person i is represented by two integers  xij and yij
. If yij = 1, the testimony says Person xij is honest; if yij = 0, 
it says Person xij is unkind. How many honest persons can be among those N 
people at most?
*/