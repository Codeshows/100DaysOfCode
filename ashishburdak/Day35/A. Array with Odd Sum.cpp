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
        ll n, e=0, o=0;
        cin>>n;
        ll a[n];
        fl(i,0,n)
        {
            cin>>a[i];
            if(a[i]&1)
            o++;
            else
            e++;
        }
        if(e==n)
        cout<<"NO"<<endl;
        else if(o==n && n&1)
        cout<<"YES"<<endl;
        else if(o>0 && e>0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
