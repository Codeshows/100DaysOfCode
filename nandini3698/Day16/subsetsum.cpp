// Geeksforgeeks\Must_do_questions\Dynamic Programming Subset Sum Problem :-

/*Given a set of numbers, check whether it can be partitioned into two subsets such that the sum of elements in both subsets is same or not.

Input:
The first line contains an integer 'T' denoting the total number of test cases. Each test case constitutes of two lines. First line contains 
'N', representing the number of elements in the set and the second line contains the elements of the set.

Output:
Print YES if the given set can be partioned into two subsets such that the sum of elements in both subsets is equal, else print NO.*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n,sum=0;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    if(sum%2==0){
	        sum=sum/2;
	        ll dp[n+1][sum+1];
	        for(ll i=0;i<=n;i++)
	            dp[i][0]=0;
	        for(ll i=0;i<=sum;i++)
	            dp[0][i]=0;
	        int c=0;
	        for(ll i=1;i<=n;i++){
	            for(ll j=1;j<=sum;j++){
	                if(j==a[i-1])
	                    dp[i][j]=1;
	                else if(a[i-1]<j)
	                    dp[i][j]=max(dp[i-1][j-a[i-1]],dp[i-1][j]);
	                else
	                    dp[i][j]=dp[i-1][j];
	            }
	            if(dp[i][sum]==1){
	                cout<<"YES"<<endl;
	                c++;
	                break;
	            }
	        }
	        if(c==0)
	            cout<<"NO"<<endl;
	        
	    }
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}