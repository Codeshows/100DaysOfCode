// Geeksforgeeks\Must_do_questions\Dynamic Programming 0-1 Knapsack Problem :-

/*You are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. 
Note that we have only one quantity of each item.
In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent values and weights associated with N items respectively. 
Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this 
subset is smaller than or equal to W. You cannot break an item, either pick the complete item, or don’t pick it (0-1 property).

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of four lines.
The first line consists of N the number of items.
The second line consists of W, the maximum capacity of the knapsack.
In the next line are N space separated positive integers denoting the values of the N items,
and in the fourth line are N space separated positive integers denoting the weights of the corresponding items.

Output:
For each testcase, in a new line, print the maximum possible value you can get with the given conditions that you can obtain for each test case in a new line.*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n,wt;
	    cin>>n>>wt;
	    int v[n],w[n];
	    for(ll i=0;i<n;i++)
	        cin>>v[i];
	    for(ll i=0;i<n;i++)
	        cin>>w[i];
	    ll dp[n+1][wt+1];
	    for(ll i=0;i<=n;i++)
	        dp[i][0]=0;
	    for(ll i=0;i<=wt;i++)
	        dp[0][i]=0;
	    for(ll i=1;i<=n;i++)
	        for(ll j=1;j<=wt;j++){
	            if(j>=w[i-1])
	                dp[i][j]=max(v[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
	            else
	                dp[i][j]=dp[i-1][j];
	        }
	    
	    cout<<dp[n][wt]<<endl;
	}
	return 0;
}