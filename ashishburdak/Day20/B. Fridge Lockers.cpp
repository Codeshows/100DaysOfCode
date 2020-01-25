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
 
int main()
{
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        int n,m;
        cin>>n>>m;
        vt a(n);
        fl(i, 0, n)
        cin>>a[i];
        if(m<n || (m==n && m==2))
        cout<<-1<<endl;
        else
        {
            ll s=0;
            sort(all(a));
            fl(i, 0, m)
            s+=a[i];
            cout<<2*s<<endl;
            fl(i, 0, m)
            {
                if(i==m-1)
                cout<<i+1<<" "<<1<<endl;
                else
                cout<<i+1<<" "<<i+2<<endl;
            }
        }
    }
	return 0;
}
