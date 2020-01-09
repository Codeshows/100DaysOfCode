#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mp map<long, long>
#define um unordered_map<long, long>
#define pll pair<long, long>
#define st set<long> 
#define us unordered_set<long>
#define vt vector<long>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)

int main()
{
	int n;
	cin>>n;
	long  ans=LONG_MAX, x=0;
	vt a(n);
	fl(i, 0, n)
	{
	    cin>>a[i];
	}
	fl(i, 0, n)
	{
	    x=0;
	    fl(j, 0, n)
	    {
	        x+=(min(a[j], abs(a[i]-a[j])));
	    }
	    ans = min(ans, x);
	}
	cout<<ans<<endl;
	return 0;
}
