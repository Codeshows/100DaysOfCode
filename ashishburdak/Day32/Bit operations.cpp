#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mp map<long, long>
#define um unordered_map<long, long>
#define pll pair<long, long>
#define st set<long> 
#define us unordered_set<long>
#define vt vector<long>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)

int main()
{
    ll n,q,l,r,x,y, s=0;
    cin>>n>>q;
    ll a[n+1]={0};
    while(q--)
    {
        s=0;
        cin>>x;
        if(x==1)
        {
            cin>>l>>r>>y;
            fl(i, l, r+1)
            a[i]|=y;
        }
        else if(x==2)
        {
            cin>>l>>r>>y;
            fl(i, l, r+1)
            a[i]&=y;
        }
        else if(x==3)
        {
            cin>>l>>r>>y;
            fl(i, l, r+1)
            a[i]^=y;
        }
        else if(x==4)
        {
            s=0;
            cin>>l>>r;
            fl(i, l, r+1)
            s+=a[i];
            cout<<s<<endl;
        }
        else
        {
            cin>>l>>r;
            s=0;
            fl(i, l, r+1)
            {
                if(i==l)
                s=a[i];
                else
                s^=a[i];
            }
            cout<<s<<endl;
        }
    }
	return 0;
}
