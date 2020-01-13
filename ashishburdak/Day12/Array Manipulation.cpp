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
long arr[10000005];

int main()
{
    long n, k, a,b,m, mx=0, x=0;
    cin>>n>>m;
    vector<pll> v;
    while(m--)
    {
        cin>>a>>b>>k;
        v.pb({a, k});
        v.pb({b+1, -k});
    }
    sort(all(v));
    fl(i, 0, v.size())
    {
        x+=v[i].ss;
        mx = max(mx, x);
    }
    cout<<mx<<endl;
    return 0;
}
