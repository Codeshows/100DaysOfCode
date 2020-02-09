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
	int t=1;
	cin>>t;
	while(t--)
	{
	    ll n,x,y, ans=0;
	    cin>>n>>x>>y;
	    ll a[n], b[n];
	    fl(i, 0, n)
	    cin>>a[i]>>b[i];
	    sort(a, a+n);
	    sort(b, b+n);
	    fl(i, 0, n)
	    {
	        if(a[i]<b[i])
	        {
	            ans+=(x*(b[i]-a[i]));
	        }
	        else if(a[i]>b[i])
	        {
	            ans+=(y*(a[i]-b[i]));
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
