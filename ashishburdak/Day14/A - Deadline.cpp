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
 
ll cc(ll x, ll y)
{
    if(x%y==0)
    return x/y;
    else
    return (x/y)+1;
}
int main()
{
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        ll n, d;
        cin>>n>>d;
        if(n==d)
        cout<<"YES"<<endl;
        else
        {
            int f=0;
            for(long i=0;i<=n;++i)
            {
                if(i+cc(d, i+1)<=n)
                {
                    f=1;
                    break;
                }
            }
            if(f)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
