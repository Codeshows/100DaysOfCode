#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ld long double
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mp map<ll, ll>
#define um unordered_map<ll, ll>
#define st set<ll> 
#define us unordered_set<ll>
#define vt vector<ll>
#define pll pair<ll, ll>
#define fl(i, x, y) for(ll i=x;i<y;++i)
#define flr(i, x, y) for(ll i=x;i>=y;--i)
 
int main()
{
    ll tt=1;
    cin>>tt;
    while(tt--)
    {
        ll x, ans=0,d;
        cin>>x;
        ans=x;
        while(1)
        {
            d=x/10;
            if(d<=0)
            break;
            x = x-(10*d)+d;
            ans+=d;
        }
        cout<<ans<<endl;
    }
	return 0;
}
