// Geeksforgeeks problem - Minimum number of coins (DP) :-

/*Given a value N, total sum you have. You have to make change for Rs. N, and there is infinite supply of each of the denominations in 
Indian currency, i.e., you have infinite supply of { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000} valued coins/notes, Find the minimum 
number of coins and/or notes needed to make the change for Rs N.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case consist of an Integer value N denoting 
the amount to get change for.

Output:
Print all the denominations needed to make the change in a separate line.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106

Example:
Input:
1
43

Output:
20 20 2 1

Explanation:
Testcase 1: Sum of Rs 43 can be changed with minimum of 4 coins/ notes 20, 20, 2, 1.*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
int main(){
    test{
        ll n;
        cin>>n;
        ll a[]={1,2,5,10,20,50,100,200,500,2000};
        ll j=0;
        
        while(a[j]<=n && j<10)
            j++;

        ll dp[j][n+1];
        
        for(ll i=0;i<=n;i++)
            dp[0][i]=i;
        for(ll i=0;i<j;i++)
            dp[i][0]=0;
            
        for(ll i=1;i<j;i++){
            for(ll j=1;j<=n;j++){
                if(j<a[i])
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=min(dp[i-1][j],dp[i][j-a[i]]+1);
            }
        }
        ll i=j-1;
        j=n;
        while(n>0){
            j=n;
            ll x=dp[i][j];
            while(i>=0 && x==dp[i][j])
                i--;
            i++;
            cout<<a[i]<<" ";
            n=n-a[i];
        }
        cout<<endl;
    }
}