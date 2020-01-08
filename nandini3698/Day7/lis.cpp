// Geeksforgeeks problem - Longest increasing subsequence (DP) :-

/*Given a sequence A of size N, find the length of the longest increasing subsequence from a given sequence .
The longest increasing subsequence means to find a subsequence of a given sequence in which the subsequence's elements 
are in sorted order, lowest to highest, and in which the subsequence is as long as possible. This subsequence is not 
necessarily contiguous, or unique.

Note: Duplicate numbers are not counted as increasing subsequence.

Input:
The first line contains an integer T, depicting total number of test cases. Then following T lines contains an integer 
N depicting the size of array and next line followed by the value of array.

Output:
For each testcase, in a new line, print the Max length of the subsequence in a separate line.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 1000
0 ≤ A[i] ≤ 300*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
int main(){
    test{
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll dp[n];
        for(ll i=0;i<n;i++)
            dp[i]=1;
        ll mx=1;
        for(ll i=1;i<n;i++){
            for(ll j=0;j<i;j++){
                if(a[i]>a[j] && dp[i]<dp[j]+1)
                    dp[i]=dp[j]+1;
            }
            mx=max(mx,dp[i]);
        }
        cout<<mx<<endl;
    }
}