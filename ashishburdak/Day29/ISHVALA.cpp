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
	int t,n,m,x,y,s;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    cin>>x>>y>>s;
	    vt a(x), b(y);
	    int ans=0, p=0, q=0;
	    fl(i, 0, x)
	    cin>>a[i];
	    fl(i, 0, y)
	    cin>>b[i];
	    if(x-1>=0)
	    {
	        if(a[x-1]!=n)
	        a.pb(n+1);
	    }
	    else 
	        a.pb(n+1);
	    if(y-1>=0)
	    {
	        if(b[y-1]!=m)
	        b.pb(m+1);
	    }
	    else
	        b.pb(m+1);
	    fl(i, 0, a.size())
	    {
	        if(i==0)
	        p+=((a[i]-1)/s);
	        else
	        p+=((a[i]-a[i-1]-1)/s);
	    }
	    fl(i, 0, b.size())
	    {
	        if(i==0)
	        q+=((b[i]-1)/s);
	        else
	        q+=((b[i]-b[i-1]-1)/s);
	    }
	    cout<<p*q<<endl;
	}
	return 0;
}
