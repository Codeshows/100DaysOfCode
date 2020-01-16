#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ld long double
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mp map<long, long>
#define um unordered_map<long, long>
#define st set<long> 
#define us unordered_set<long>
#define vt vector<long>
#define pll pair<long, long>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)
 
int main()
{
    ll n, a,b, mn=LLONG_MAX;
    cin>>n;
    for(ll i=1;i<=sqrt(n);++i)
    {
        if(n%i==0 && __gcd(i, n/i)==1)
        {
            mn = min(mn, max(i, n/i));
            a=i;
            b=n/i;
        }
    }
    cout<<a<<" "<<b<<endl;
	return 0;
}
