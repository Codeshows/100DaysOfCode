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

bool vis[100005], vis1[100005];
long mx, val;

void dfs(long ind, vector<long> v[100005], long cnt)
{
    if(vis[ind])
    return;
    vis[ind]=true;
    if(cnt>mx)
    {
        mx = cnt;
        val = ind;
    }
    for(int i=0;i<v[ind].size();++i)
    dfs(v[ind][i], v, cnt+1);
}

void dfs1(long ind, vector<long> v[100005], long cnt)
{
    if(vis1[ind])
    return;
    vis1[ind]=true;
    if(cnt>mx)
    {
        mx = cnt;
    }
    for(int i=0;i<v[ind].size();++i)
        dfs1(v[ind][i], v, cnt+1);
}

int main() {
	// your code goes here
	long n,m,p,q,ans=0;
	cin>>n>>m;
	vt v[n+2];
	while(m--)
	{
	    cin>>p>>q;
	    v[p].pb(q);
	    v[q].pb(p);
	}
	fl(i, 1, n+1)
	{
	    if(!vis[i])
	    {
	        mx=0;
	        val = i;
	        dfs(i, v, 0);
	        mx=0;
	        dfs1(val, v, 0);
	        ans = max(ans, (mx+1)/2);
	    }
	}
	cout<<ans<<endl;
	return 0;
}
