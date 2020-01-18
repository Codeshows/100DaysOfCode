// Geeksforgeeks\Must_do_questions\Greedy Problem-Activity Selection

/*Given N activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, 
assuming that a person can only work on a single activity at a time.

Note : The start time and end time of two activities may coincide.

Input:
The first line contains T denoting the number of testcases. Then follows description of testcases. First line is N number of activities 
then second line contains N numbers which are starting time of activies.Third line contains N finishing time of activities.

Output:
For each test case, output a single number denoting maximum activites which can be performed in new line.

Constraints:
1<=T<=50
1<=N<=1000
1<=A[i]<=100*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

bool sortpair(const pair<ll,ll>&a,const pair<ll,ll>&b){
    return (a.second<b.second);
}
int main() {
	test{
	    ll n,maxv=1;
	    cin>>n;
	    ll a[n],b[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    for(ll i=0;i<n;i++)
	        cin>>b[i];
    
	    vector<pair<ll,ll>>v;
	    
	    for(ll i=0;i<n;i++)
	        v.push_back(make_pair(a[i],b[i]));
	        
	    sort(v.begin(),v.end(),sortpair);

	    ll dp[n];
	    for(ll i=0;i<n;i++)
	        dp[i]=1;
	        
	    for(ll i=1;i<n;i++){
	        for(ll j=0;j<i;j++){
	            if(v[i].first>=v[j].second && dp[i]<dp[j]+1)
	                dp[i]=dp[j]+1;
	        }
	        maxv=max(maxv,dp[i]);
	    }
	    //cout<<dp[0]<<dp[1]<<dp[2]<<dp[3];
	    cout<<maxv<<endl;
	}
	return 0;
}