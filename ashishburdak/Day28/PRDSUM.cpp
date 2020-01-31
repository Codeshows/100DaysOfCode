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
	ll l,r,d,q,n;
	scanf("%lld", &n);
	vt a(n+1);
	ll v[11][n+1]={0}, x=0;
	fl(i, 1, n+1)
	scanf("%lld", &a[i]);
	fl(i, 1, 11)
	{
	    fl(j, 1, n+1)
	    {
	        if(j-i>0)
	        v[i][j] = a[j]+v[i][j-i];
	        else
	        v[i][j] = a[j];
	    }
	}
	scanf("%lld", &q);
	while(q--)
	{
	    scanf("%lld %lld %lld", &l, &r, &d);
	    ll p = (r-l)%d;
	    p = d-p;
	    if(l-p>0)
	    {
	        if(p==0)
	        {
	            if(l-d>0)
	            printf("%lld\n", v[d][r]-v[d][l-d]);
	            else
	            printf("%lld\n", v[d][r]);
	        }
	        else
	        {
	            printf("%lld\n", v[d][r]-v[d][l-p]);
	        }
	    }
	    else
	    printf("%lld\n", v[d][r]);
	}
	return 0;
}
