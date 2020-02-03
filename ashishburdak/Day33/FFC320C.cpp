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

bool si[7000005];

void sieve()
{
    memset(si, true, sizeof(si));
    si[0]=false;
    si[1]=false;
    for(int i=2;i*i<=7000005;++i)
    {
        if(si[i]==true)
        {
            for(int j=i*i;j<=7000005;j+=i)
            si[j]=false;
        }
    }
}

int main() {
	// your code goes here
	sieve();
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll a[n], tmp;
	    vp p;
	    fl(i, 0, n)
	    {
	        cin>>a[i];
	        tmp=a[i];
	        if(si[a[i]])
	        p.pb({0, i+1});
	        else
	        {
	            ll x=0;
	            while(si[tmp]==false)
	            {
	                tmp++;
	                x++;
	            }
	            p.pb({x, i+1});
	        }
	    }
	    sort(all(p));
	    fl(i, 0, n)
	    cout<<p[i].ss<<" ";
	    cout<<endl;
	}
	return 0;
}
