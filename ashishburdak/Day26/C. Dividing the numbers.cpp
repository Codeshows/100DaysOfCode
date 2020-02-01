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
    ll n, x=0, y=0, z;  
    vt v;
    cin>>n;
    if(n%4==0)
    {
        cout<<0<<endl;
        fl(i, 1, (n/4)+1)
            v.pb(i);
        flr(i, n, ((3*n)/4)+1) 
            v.pb(i);
    }
    else if(n%4==1)
    {
        cout<<1<<endl;
        fl(i, 1, (n/4)+2)
            v.pb(i);
        flr(i, n, ((3*n)/4)+2) 
            v.pb(i);
    }
    else if(n%4==2)
    {
        cout<<1<<endl;
        v.pb(1);
        x+=1;
        y=1;
        z = (n*(n+1))/4;
        while(1)
        {
            if(x>=z)
            break;
            y+=3;
            x+=y;
            v.pb(y);
            x+=(y+1);
            v.pb(y+1);
            y++;
        }
    }
    else
    {
        cout<<0<<endl;
        fl(i, 1, (n/4)+1)
            v.pb(i);
        flr(i, n, ((3*n)/4)+1) 
            v.pb(i);
    }
    sort(all(v));
    cout<<v.size()<<" ";
    fl(i, 0, v.size())
    cout<<v[i]<<" ";
    cout<<endl;
	return 0;
}
