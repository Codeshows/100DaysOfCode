//Geeksforgeeks problem - Maximum chain length (DP) :-

/*You are given N pairs of numbers. In every pair, the first number is always smaller than the second number. A pair (c, d) 
can follow another pair (a, b) if b < c. Chain of pairs can be formed in this fashion. Your task is to complete the function 
maxChainLen which returns an integer denoting the longest chain which can be formed from a given set of pairs. 

Input:
The first line of input contains an integer T denoting the no of test cases then T test cases follow .Then T test cases follow . 
The first line of input contains an integer N denoting the no of pairs . In the next line are 2*N space separated values 
denoting N pairs.

Output:
For each test case output will be the length of the longest chain formed.*/

#include <bits/stdc++.h>
using namespace std;

int maxChainLen(vector<pair<int,int>>v,int n){
    int dp[n];
    for(int i=0;i<=n;i++)
        dp[i]=1;
    int mx=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[j].second<v[i].first && dp[i]<dp[j]+1)
                dp[i]=dp[j]+1;
        }
        if(dp[i]>mx)
            mx=dp[i];
    }
    return mx;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<pair<int,int>>v(n);
		for(int i=0;i<n;i++)
		{
			int a,b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }		
		cout<<maxChainLen(v,n)<<endl;
	}
	return 0;
}
