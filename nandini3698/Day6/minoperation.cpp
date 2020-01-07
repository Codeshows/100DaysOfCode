//Geeksforgeeks problem - Minimum operations (DP) :-

/*You are given a number N. You have to find the number of operations required to reach N from 0. You have 2 operations available:

Double the number
Add one to the number
Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N.

Output:
For each test case, in a new line, print the minimum number of operations required to reach N from 0. 
*/

#include <bits/stdc++.h>
#define ll long long
#define test ll t;cin>>t;while(t--)
using namespace std;

int main() {
	test{
	    ll n;
	    cin>>n;
	    ll dp[n+1];
	    dp[0]=0;dp[1]=1;
	    for(ll i=2;i<=n;i++){
	        if(i%2!=0)
	            dp[i]=1+dp[i-1];
	        else
	            dp[i]=1+min(dp[i/2],dp[i-1]);
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}