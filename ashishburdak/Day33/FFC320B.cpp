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
	ll t, l,r;
	cin>>t;
	while(t--)
	{
	    cin>>l>>r;
	    if(l>r)
	    swap(l, r);
	    ll x = (l)-sqrt(l);
	    ll y = (r+1)-sqrt(r+1);
	    //cout<<x<<" "<<y<<endl;
	    if(l==0)
	    cout<<y<<endl;
	    else
	    cout<<y-x<<endl;
	}
	return 0;
}
