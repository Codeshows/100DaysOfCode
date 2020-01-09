// Geeksforgeeks problem - Maximum sum increasing subsequence (DP) :-

/*Given an array A of N positive integers. Find the sum of maximum sum increasing subsequence of the given array.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case 
is N(the size of array). The second line of each test case contains array elements.

Output:
For each test case print the required answer in new line.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 ≤ Ai ≤ 106*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    ll dp[n];
	    for(ll i=0;i<n;i++)
	        dp[i]=a[i];
	    ll sum=dp[0];
	    for(ll i=1;i<n;i++){
	        ll m=dp[i];
	        for(ll j=0;j<i;j++){
	            if(a[i]>a[j] && m<dp[i]+dp[j])
	                m=dp[i]+dp[j];
	        }
	        dp[i]=m;
	        if(dp[i]>sum)
	            sum=dp[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}