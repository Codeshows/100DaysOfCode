/*
Doraemon has a matrix with N rows (numbered 1 through N) and M columns (numbered 1 through M). Let's denote the element in row i and column j by Ai,j. Next, let's define a sub-row of a row r as a sequence Ar,x,Ar,x+1,…,Ar,y for some x and y (1≤x≤y≤M) and a sub-column of a column c by Ax,c,Ax+1,c,…,Ay,c for some x and y (1≤x≤y≤N).

You need to find the number of pairs (sub-row of some row, sub-column of some column) with the following properties:

Both sequences (the sub-row and the sub-column) have the same length.
This length is odd.
The central elements of both sequences are the same (they correspond to the same element of the matrix).
Both sequences are palindromes.
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and M.
N lines follow. For each i (1≤i≤N), the i-th of these lines contains M space-separated integers Ai,1,Ai,2,…,Ai,M.
Output
For each test case, print a single line containing one integer ― the number of valid pairs.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,i,j,k,m,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        long long int a[n][m];
        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        cin>>a[i][j];
        ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                ans++;
                for(k=1;i-k>=0&&i+k<n&&j-k>=0&&j+k<m;k++)
                {
                    if(a[i-k][j]==a[i+k][j]&&a[i][j-k]==a[i][j+k])
                    ans++;
                    else break;
                }
            }
        }
        cout<<ans<<"\n";
    }
	// your code goes here
	return 0;
}
