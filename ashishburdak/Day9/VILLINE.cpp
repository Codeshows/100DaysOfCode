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
	long n,m,c;
	cin>>n;
	cin>>m>>c;
	long x[n], y[n], p[n], s1=0, s2=0;
	vt v(n);
	fl(i, 0,n)
	{
	    cin>>x[i]>>y[i]>>p[i];
	    if(m*x[i]+c-y[i]>0)
	    v[i]=1;
	    else
	    v[i]=0;
	}
	fl(i, 0, n)
	{
	    if(v[i])
	    s1+=p[i];
	    else
	    s2+=p[i];
	}
	cout<<max(s1, s2)<<endl;
	return 0;
}
