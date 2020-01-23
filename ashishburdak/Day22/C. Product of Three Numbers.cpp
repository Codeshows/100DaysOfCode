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
 
vt factors(ll n)
{
    vt v;
    for(long i=2;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            v.pb(i);
            if(i!=n/i)
            v.pb(n/i);
        }
    }
    return v;
}
 
int main()
{
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        ll n;
        ll a[3];
        cin>>n;
        vt v = factors(n);
        if(v.size()<3)
        cout<<"NO"<<endl;
        else
        {
            int f=0;
            sort(all(v));
            fl(i, 0, v.size())
            {
                fl(j, i+1, v.size())
                {
                    if(n%(v[i]*v[j])==0)
                    {
                        auto it = find(all(v), n/(v[i]*v[j])); 
                        if(it!=v.end() && *it!=v[i] && *it!=v[j])
                        {
                            f=1;
                            a[0] = v[i];
                            a[1] = v[j];
                            a[2] = *it;
                            break;
                        }
                    }
                }
                if(f)
                break;
            }
            if(f==0)
            cout<<"NO"<<endl;
            else
            {
                sort(a, a+3);
                cout<<"YES"<<endl;
                cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
            }
        }
    }
	return 0;
}
