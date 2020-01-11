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

vt ffactors(long n)
{
    vt v;
    for(long i=1;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            if(n/i==i)
            v.pb(i);
            else
            {
                v.pb(i);
                v.pb(n/i);
            }
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
	    ll n, k, x, y;
	    cin>>n>>k;
	    x = (k*(k+1))/2;
	    if(n<x)
	    cout<<-1<<endl;
	    else
	    {
	        vt v;
	        v = ffactors(n);
	        sort(all(v));
	        flr(i, v.size()-1, 0)
	        {
	            y = n/v[i];
	            if(y>=x)
	            {
	                cout<<v[i]<<endl;
	                break;
	            }
	        }
	    }
	}
	return 0;
}
