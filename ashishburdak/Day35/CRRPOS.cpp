#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mp map<long, long>
#define um unordered_map<long, long>
#define pll pair<long, long>
#define st set<long> 
#define us unordered_set<long>
#define vt vector<long>
#define vp vector<pll>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)

long fac[100005];

void fact()
{
    fac[0] = 1;
    for(int i=1;i<100005;++i)
    {
        fac[i] = (fac[i-1]*i)%mod;
    }    
}

int main() {
	// your code goes here
	fact();
	ll t,n;
	cin>>t;
	while(t--)
	{
	    ll ans=0;
	    cin>>n;
	    fl(i, 1, n+1)
	    {
	        if(i==1)
	        ans = (ans%mod+fac[n-1]%mod)%mod;
	        else if(i==n)
	        ans = (ans%mod+fac[n-1]%mod)%mod;
	        else
	        ans = (ans%mod+(fac[i-1]%mod*fac[n-i]%mod)%mod)%mod;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
