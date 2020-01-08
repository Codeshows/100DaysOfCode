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
	while(t--)
    {
        cin>>n;
        long a, mx=0, chk[n+1]={0};
        vector<pll> v, p;
        fl(i, 0, n)
        {
            cin>>a;
            v.pb({a, i+1});
        }
        sort(all(v));
        flr(i, n-1, 0)
        {
            flr(j, i-1, 0)
            {
                if(v[j].ff>=((double)v[i].ff/2))
                {
                    //cout<<v[j].ff<<" "<<v[i].ff<<endl;
                    if(chk[i]==0 && chk[j]==0)
                    {
                        p.pb({v[j].ss, v[i].ss});
                        chk[i]=1;
                        chk[j]=1;
                    }
                }
            }
        }
        sort(all(p));
        cout<<2*p.size()<<endl;
        fl(i, 0, p.size())
        cout<<p[i].ff<<" "<<p[i].ss<<endl;
    }
	return 0;
}
