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
#define vt vector<ll>
#define pll pair<long, long>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)
 
bool vis[100005];
ll mn;
 
void dfs(ll ind, vector<ll> v[100005], ll c[])
{
    vis[ind]=true;
    for(long i=0;i<v[ind].size();++i)
    {
        if(vis[v[ind][i]]==0)
        {
            mn = min(mn, c[v[ind][i]-1]);
            dfs(v[ind][i], v, c);
        }
    }
}
 
int main()
{
    int tt=1;
    //cin>>tt;
    while(tt--)
    {
        ll n,m,a,b, ans=0;
        cin>>n>>m;
        vt v[n+1];
        ll c[n];
        fl(i, 0, n)
        cin>>c[i];
        while(m--)
        {
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }
        fl(i, 1, n+1)
        {
            mn = c[i-1];
            if(vis[i]==0)
            {
                dfs(i, v, c);
                ans+=mn;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
