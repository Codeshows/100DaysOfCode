#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mapll map<long, long>
#define umapll unordered_map<long, long>
#define pll pair<long, long>
#define setl set<long> 
#define usetl unordered_set<long>
#define vtl vector<long>
#define vpll vector<pll>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)

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

long modInverse(long n, long p) 
{ 
    return power(n, p-2, p); 
}

int main() {
	// your code goes here
	long a,b,n,x, y;
	cin>>n;
	cin>>a>>b;
	if(n==1)
	cout<<a<<endl;
	else if(n==2)
	cout<<b<<endl;
	else
	{
	    x=n-1;
	    y = ((power(4, x, mod)%mod + (4*power(-1, x, mod))%mod)%mod * modInverse(5, mod))%mod;
	    if(n&1)
	    {
	        cout<<((y%mod*a%mod)%mod + ((y-1)%mod*b%mod)%mod)%mod<<endl; 
	    }
	    else
	    {
	        cout<<((y%mod*a%mod)%mod + ((y+1)%mod*b%mod)%mod)%mod<<endl;
	    }
	}
	return 0;
}
