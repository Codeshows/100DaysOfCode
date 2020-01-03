//Codeforces 189-A Cut Ribbon (Basic DP):-

/* Polycarpus has a ribbon, its length is n. He wants to cut the ribbon in a way that fulfils the following two conditions:

After the cutting each ribbon piece should have length a, b or c.
After the cutting the number of ribbon pieces should be maximum.
Help Polycarpus and find the number of ribbon pieces after the required cutting.

Input
The first line contains four space-separated integers n, a, b and c (1 ≤ n, a, b, c ≤ 4000) — the length of the original 
ribbon and the acceptable lengths of the ribbon pieces after the cutting, correspondingly. The numbers a, b and c can coincide.

Output
Print a single number — the maximum possible number of ribbon pieces. It is guaranteed that at least one correct ribbon cutting exists.*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll max(ll a, ll b, ll c){
      if(a>=b && a>=c)
            return a;
      else if(b>=c)
            return b;
      else return c;
}
ll fun(ll i){
      if(i<0)
            return 0;
      return i;
}
int main(){
      ll n,a,b,c,res;
      cin>>n>>a>>b>>c;
      ll dp[n+1];
      dp[0]=0;
      for(ll i=1; i<n+1; i++){
            ll res;
            res=max(dp[fun(i-a)],dp[fun(i-b)],dp[fun(i-c)]);
            if(res>0)
                  dp[i]=res+1;
            else if(res==0 && (i==a || i==b || i==c))
                  dp[i]=1;
            else
                  dp[i]=0;
      }
      cout<<dp[n];
      
      return 0;
}