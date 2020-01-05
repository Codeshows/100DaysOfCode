//Codeforces 894-A Cut Ribbon (Basic DP):-

/*"QAQ" is a word to denote an expression of crying. Imagine "Q" as eyes with tears 
and "A" as a mouth.

Now Diamond has given Bort a string consisting of only uppercase English letters of
length n. There is a great number of "QAQ" in the string (Diamond is so cute!).

Bort wants to know how many subsequences "QAQ" are in the string Diamond has given. 
Note that the letters "QAQ" don't have to be consecutive, but the order of letters 
should be exact.

Input
The only line contains a string of length n (1 ≤ n ≤ 100). It's guaranteed that the
string only contains uppercase English letters.

Output
Print a single integer — the number of subsequences "QAQ" in the string.*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      string s;
      cin>>s;
      int tot=0;
      int dp[s.size()+1];
      dp[0]=0;
      
      for(int i=0;i<s.size();i++){
            if(s[i]=='Q'){
                  tot++;
                  dp[i+1]=tot;
            }
            else
                  dp[i+1]=dp[i];
      }
      
      int res=0;
      for(int i=0;i<s.size();i++){
            if(s[i]=='A')
                  res=res+dp[i]*(tot-dp[i]);
      }
 
      cout<<res;
      return 0;
}