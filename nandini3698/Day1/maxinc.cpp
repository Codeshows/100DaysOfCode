// Codeforces 702-A Maximum Increase (Basic DP) :-

/* You are given array consisting of n integers. Your task is to find the maximum length of an increasing subarray of the given array.

A subarray is the sequence of consecutive elements of the array. Subarray is called increasing if each element of this subarray strictly greater than previous.

Input
The first line contains single positive integer n (1 ≤ n ≤ 105) — the number of integers.

The second line contains n positive integers a1, a2, ..., an (1 ≤ ai ≤ 109).

Output
Print the maximum length of an increasing subarray of the given array. */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
      ll n;
      cin>>n;
      ll a[n];
      for(ll i=0; i<n; i++)
            cin>>a[i];
      ll dp[n];
      for(ll i=0; i<n; i++)
            dp[i]=1;
      
      ll max=1;
      for(ll i=1; i<n; i++){
            if(a[i]>a[i-1])
                  dp[i]=dp[i-1]+1;
            if(dp[i]>max)
                  max=dp[i];
      }
      // for(ll i=0; i<n; i++)
      //       cout<<dp[i];
      cout<<max;
      
      return 0;
}
