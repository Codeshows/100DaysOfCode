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

ll a[100006];

long power(long x, long y, long p) 
{ 
    long res = 1;    
    x = x % p; 
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1;
        x = (x*x) % p; 
    } 
    return res; 
}

void fib(ll k)
{
    ll x=0;
    fl(i,0,k)
    a[i]=power(2, i, mod);
    fl(i, k,100005)
    {
        x=0;
        fl(j, i-k, i+1)
        x= (x+a[j])%mod;
        a[i] = (x)%mod;
    }
}
int main()
{
	ll n, k, ans=0;
	cin>>n>>k;
	fib(k);
	/*fl(i, 0, n+1)
	cout<<a[i]<<" ";
	cout<<endl;*/
	if(k==1)
	cout<<1<<endl;
	else
    cout<<a[n-2]%mod<<endl;
	return 0;
}
