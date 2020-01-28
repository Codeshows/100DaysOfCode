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
	int t,n;
	cin>>t;
	while(t--)
	{
	    long s,p,v, mx=0;
	    cin>>n;
	    while(n--)
	    {
	        cin>>s>>p>>v;
	        mx = max(mx, (p/(s+1))*v);
	    }
	    cout<<mx<<endl;
	}
	return 0;
}
