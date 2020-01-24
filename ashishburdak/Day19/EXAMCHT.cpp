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

vt factors(ll x)
{
    vt v;
    for(long i=1;i<=sqrt(x);++i)
    {
        if(x%i==0)
        {
            v.pb(i);
            if(i!=x/i)
            v.pb(x/i);
        }
    }
    return v;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b, ans=0, x;
	    cin>>a>>b;
	    if(a>b)
	    swap(a, b);
	    x = b-a;
	    vt v = factors(x);
	    cout<<v.size()<<endl;
	}
	return 0;
}
