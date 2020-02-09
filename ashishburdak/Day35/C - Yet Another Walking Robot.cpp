#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ld long double
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mp map<pll, ll>
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
        mp m;
        ll n, x=0, y=0,l=0,r=LONG_MAX,f=0;
        string s;
        m[{0,0}] = 0;
        cin>>n>>s;
        fl(i,0,n)
        {
            if(s[i]=='L')
            x--;
            else if(s[i]=='R')
            x++;
            else if(s[i]=='U')
            y++;
            else 
            y--;
 
            if(m.find({x,y})!=m.end())
            {
                ll cur_l = m[{x,y}], cur_r=i;
                if((cur_r-cur_l)<r-l)
                {
                    r=cur_r+1;
                    l=cur_l+1;
                    f=1;
                }
            }
            m[{x, y}]=i+1;
        }
        if(f)
        cout<<l<<" "<<r<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}
