#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ull unsigned long long
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

ll avg(ll a, ll b) 
{ 
    return (a / 2) + (b / 2) + ((a % 2 + b % 2) / 2); 
}
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
	    ll l,r, x,y;
	    cin>>l>>r;
	    cout<<avg(l, r)<<endl;
	}
	return 0;
}
