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

ll xorr(ll n) 
{ 
    switch(n%4) 
    { 
    case 0: return n;    
    case 1: return 1;       
    case 2: return n + 1;     
    case 3: return 0;    
    } 
} 

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll l, r, x, y;
	    cin>>l>>r;
	    if(l==0)
	    y = xorr(r);
	    else
	    y = xorr(r)^xorr(l-1);
	    cout<<y<<endl;
	}
	return 0;
}
