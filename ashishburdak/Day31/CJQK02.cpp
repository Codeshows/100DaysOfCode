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
	ll n,x,y;
	cin>>n>>x>>y;
	if(n==1)
	{
	    if(x==y)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	else if(y<x)
	cout<<0<<endl;
	else if(x==y)
	cout<<1<<endl;
	else
	{
	    n-=2;
	    cout<<y*n - x*n +1<<endl;
	}
	return 0;
}
