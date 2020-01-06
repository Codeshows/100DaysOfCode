//Codeforces 1180-A Cut Ribbon (Basic DP):-

/*While playing with geometric figures Alex has accidentally invented a concept of a n-th order 
rhombus in a cell grid.

A 1-st order rhombus is just a square 1×1 (i.e just a cell).

A n-th order rhombus for all n≥2 one obtains from a n−1-th order rhombus adding all cells which 
have a common side with it to it (look at the picture to understand it better).


Alex asks you to compute the number of cells in a n-th order rhombus.

Input
The first and only input line contains integer n (1≤n≤100) — order of a rhombus whose numbers of 
cells should be computed.

Output
Print exactly one integer — the number of cells in a n-th order rhombus.
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      ll n;
      cin>>n;
      
      ll blk[n+1];
      blk[0]=0;blk[1]=1;
      
      for(ll i=2;i<=n;i++)
            blk[i]=blk[i-1]+4*(i-1);
      
      cout<<blk[n];
      return 0;
}