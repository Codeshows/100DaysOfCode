// Codeforces problem 489C (Given Length and Sum of Digits) :-

/*You have a positive integer m and a non-negative integer s. Your task is to find the smallest and the largest of the 
numbers that have length m and sum of digits s. The required numbers should be non-negative integers written in the 
decimal base without leading zeroes.

Input
The single line of the input contains a pair of integers m, s (1 ≤ m ≤ 100, 0 ≤ s ≤ 900) — the length and the sum of 
the digits of the required numbers.

Output
In the output print the pair of the required non-negative integer numbers — first the minimum possible number, then — 
the maximum possible number. If no numbers satisfying conditions required exist, print the pair of numbers "-1 -1" 
(without the quotes).*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

bool can(int m, int s)
{
    return s >= 0 && s <= 9 * m;
}

int main(){
      int m,s;
      cin>>m>>s;
      string minn="";
      string maxn="";
      int sum = s;
      for (int i = 0; i < m; i++){
            for (int d = 0; d < 10; d++){
                  if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sum - d)){
                        minn += char('0' + d);
                        sum -= d;
                        break;
                  }
            }
      }
      sum=s;
      for (int i = 0; i < m; i++){
            for (int d = 9; d > 0; d--){
                  if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sum - d)){
                        maxn += char('0' + d);
                        sum -= d;
                        break;
                  }
            }
      }
      cout<<minn<<" "<<maxn;
      return 0;
}