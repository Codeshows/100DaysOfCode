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
	scanf("%d", &t);
	while(t--)
	{
	    int n, f=0;
	    scanf("%d", &n);
	    ll a[n], res=1;
	    fl(i, 0, n)
	    scanf("%lld", &a[i]);
	    sort(a, a+n);
	    ll i;
	    for(i=0;i<n && a[i]<=res;++i)
	    {
	        res+=a[i];
	    }
	    if(res>100000000000000000)
	    cout<<-1<<endl;
	    else
	    printf("%lld\n", res);
	}
	return 0;
}
