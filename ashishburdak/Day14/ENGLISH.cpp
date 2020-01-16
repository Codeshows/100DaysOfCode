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

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	string s;
	while(t--)
	{
	    map<string, ll> m;
	    map<ll, vector<pll>, greater<>> res;
	    vector<string> v;
	    ll ans=0, cnt=0;
	    cin>>n;
	    vt vis(n, 0);
	    while(n--)
	    {
	        cin>>s;
	        m[s]++;
	    }
	    for(auto it:m)
	    {
	        if(it.ss>=2)
	        {
	            ans+=((it.ss/2)*(it.ff.length()*it.ff.length()));
	            it.ss = it.ss%2;
	        }
	        if(it.ss>0)
	        v.pb(it.ff);
	    }
	    ll siz = v.size();
	    fl(i, 0, siz-1)
	    {
	        fl(j, i+1, siz)
	        {
	            if(v[i][0]!=v[j][0])
	            break;
	            ll s1 = v[i].size();
	            ll s2 = v[j].size();
	            ll sz = min(s1, s2);
	            cnt=0;
	            fl(k, 0, sz)
	            {
	                if(v[i][k]==v[j][k] && v[i][s1-1-k]==v[j][s2-1-k])
	                cnt++;
	                else
	                break;
	            }
	            res[cnt].pb({i,j});
	        }
	    }
	    for(auto it:res)
	    {
	        ll size = it.ss.size();
	        fl(i, 0, size)
	        {
	            if(vis[it.ss[i].ff]==0 && vis[it.ss[i].ss]==0)
	            {
	                ans+=(it.ff*it.ff);
	                vis[it.ss[i].ff]=1;
	                vis[it.ss[i].ss]=1;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
