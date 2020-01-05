#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mapll map<long, long>
#define mapcl map<char, long>
#define mapsl map<string, long>
#define umapll unordered_map<long, long>
#define umapcl unordered_map<char, long>
#define umapsl unordered_map<string, long>
#define pll pair<long, long>
#define setl set<long> 
#define usetl unordered_set<long>
#define vtl vector<ll>
#define fl(i, x, y) for(ll i=x;i<y;++i)
#define flr(i, x, y) for(ll i=x;i>=y;--i)

ll power(int x, ll y)
{
    ll ans=1;
    for(ll i=0;i<y;++i)
    {
        ans*=(x);
    }
    return ans;
}

int main()
{
	ll n, x, y=0, o, z, k;
	cin>>n;
	ll a[n];
	fl(i, 0, n)
	{
	    cin>>a[i];
	}
	fl(i, 0, n)
	{
	    z=0;
	    y=0;
	    x = a[i];
	    o = __builtin_popcountll(x);
	    while(x = x>>1)
	    y++;
	    while(o--)
	    {
	        z+=(power(2, y));
	        y--;
	    }
	    if(z!=a[i])
	    {
	        a[i]=z;
	    }
	}
	fl(i, 0, n)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
