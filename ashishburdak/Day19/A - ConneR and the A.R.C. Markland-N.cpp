#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b;
    cin>>a>>b;
    if(a<b)
    {
        for(int i=0;i<b;++i)
        cout<<a;
    }
    else
    {
        for(int i=0;i<a;++i)
        cout<<b;
    }
	return 0;
}#include <bits/stdc++.h>
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
        ll n,s,k, x,a, b;
        cin>>n>>s>>k;
        um m;
        fl(i,0,k)
        {
            cin>>x;
            m[x]=1;
        }
        a=s;
        b=s;
        while(1)
        {
            if(!m[a])
            {
                cout<<s-a<<endl;
                break;
            }
            else if(!m[b])
            {
                cout<<b-s<<endl;
                break;
            }
            if(a!=1)
            a--;
            if(b!=n)
            b++;
        }
    }
	return 0;
}
