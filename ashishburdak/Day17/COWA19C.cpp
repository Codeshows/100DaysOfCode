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

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	    long ans=1;
	    cin>>n;
	    vt v;
	    for(int i=1;i<=sqrt(n);++i)
	    {
	        if(n%i==0)
	        {
	            if(i==n/i)
	            v.pb(i);
	            else
	            {
	                v.pb(i);
	                v.pb(n/i);
	            }
	        }
	    }
	    fl(i, 0, v.size())
	    {
	        ans = (ans%mod*(1%mod+v[i]%mod)%mod)%mod;
	    }
	    cout<<ans-1<<endl;
	}
	return 0;
}
