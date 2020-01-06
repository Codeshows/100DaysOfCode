#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(), x.end()
#define mapll map<long, long>
#define mapcl map<char, long>
#define mapsl map<string, long>
#define umapll unordered_map<long, long>
#define umapcl unordered_map<char, long>
#define umapsl unordered_map<string, long>
#define setl set<long> 
#define usetl unordered_set<long>
#define vtl vector<ll>
#define fl(i, x, y) for(int i=x;i<y;++i)
#define flr(i, x, y) for(int i=x;i>=y;--i)

bool check(ll mid, vtl a, ll m)
{
    ll currentsum=0, day=1;
    fl(i, 0, a.size())
    {
        if(a[i]>mid) 
        return false;
        if(currentsum+a[i]>mid)
        {
            currentsum=a[i];
            day++;
        }
        else
        {
            currentsum+=a[i];
        }
    }
    return day<=m;
}

int main()
{
	ll n,m;
	cin>>n>>m;
	ll x=0, ans=0, y, s=0, mx=0,l,r, mid;
	vtl a(n);
	fl(i, 0, n)
	{
	    cin>>a[i];
	    s+=a[i];
	    mx = max(mx, a[i]);
	}
	l=0, r=s;
	while(l<=r)
	{
	    mid=(l+r)/2;
	    if(check(mid, a, m)==true)
	    {
	        r = mid-1;
	        ans = mid;
	    }
	    else
	    l = mid+1;
	}
	cout<<ans<<endl;
	return 0;
}
