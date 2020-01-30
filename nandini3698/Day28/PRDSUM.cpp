#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

// ll a[100001];
// ll dp[100001][10]={};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	int n;
	cin>>n;
	
	ll a[n];
	ll dp[n+1][11]={};
	
	for(ll i=0;i<n;i++)
	    cin>>a[i];
	    
	int D=min(n,10);
	    
	for(ll j=1;j<=D;j++){
	    for(int i=1;i<=j;i++)
	        dp[i][j]=a[i-1];
	    for(ll i=j+1;i<=n;i++)
	        dp[i][j]=a[i-1]+dp[i-j][j];
	    
	}
	
	int q;
	cin>>q;
	while(q--){
	    int l,r,d;
	    cin>>l>>r>>d;
	    if(d>D){
	        cout<<a[r-1]<<endl;
	        continue;
	    }
	    ll sum=dp[r][d];
	    ll idx=r-d*((r-l)/d+1);
	    if(idx>0)
	    sum-=dp[idx][d];
	    cout<<sum<<endl;
	}
	return 0;
}
