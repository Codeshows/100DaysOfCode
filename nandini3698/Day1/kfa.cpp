// Codeforces 580-A Kefa and First Steps (Basic DP):-

/* Kefa decided to make some money doing business on the Internet for exactly n days. He knows 
that on the i-th day (1 ≤ i ≤ n) he makes ai money. Kefa loves progress, that's why he wants 
to know the length of the maximum non-decreasing subsegment in sequence ai. Let us remind you
that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is 
called non-decreasing if all numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!

Input
The first line contains integer n (1 ≤ n ≤ 105).

The second line contains n integers a1,  a2,  ...,  an (1 ≤ ai ≤ 109).

Output
Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
      int n;
      cin>>n;
      long long int a[n];
      for(int i=0; i<n; i++)
            cin>>a[i];
      int b[n];
      b[0]=1;
      long long int max=1;
      for(int i=1; i<n; i++){
            if(a[i]>=a[i-1]){
                  b[i]=b[i-1]+1;
            }
            else
                  b[i]=1;
            
            if(b[i]>max)
                  max=b[i];
      }
      cout<<max;
      
      return 0;
}