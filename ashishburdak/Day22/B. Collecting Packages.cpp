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
 
bool cmp(const pll &a, const pll &b)
{
    if(a.ff==b.ff)
    return a.ss<b.ss;
    else
    return a.ff<b.ff;
}
 
int main()
{
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        string s="";
        int f=0;
        ll n, x, y, p;
        cin>>n;
        vector<pll> v;
        fl(i, 0, n)
        {
            cin>>x>>y;
            v.pb({x, y});
        }
        sort(all(v), cmp);
        p = v[0].ff;
        while(p--)
        s+='R';
        p = v[0].ss;
        while(p--)
        s+='U';
        fl(i, 1, n)
        {
            if(v[i].ss<v[i-1].ss)
            {
                f=1;
                break;
            }
            p = v[i].ff-v[i-1].ff;
            while(p--)
            s+='R';
            p = v[i].ss-v[i-1].ss;
            while(p--)
            s+='U';
        }
        if(f)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
    }
	return 0;
}
