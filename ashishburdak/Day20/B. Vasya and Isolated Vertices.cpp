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
#define fl(i, x, y) for(ll i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)
 
int main()
{
    int tt=1;
    //cin>>tt;
    while(tt--)
    {
        ll n, m, mn, mx, x;
        cin>>n>>m;
        x = (n*(n-1))/2;
        if(m>=x)
        mx=0;
        else
        {
            fl(i, 0, n+1)
            {
                x = (i*(i-1))/2;
                if(x>=m)
                {
                    mx = n-i;
                    break;
                }
            }
        }
        if(n==1)
        mx=1;
        mn = max((ll)0, n-(2*m));
        cout<<mn<<" "<<mx<<endl;
    }
	return 0;
}
