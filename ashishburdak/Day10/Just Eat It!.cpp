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
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)
 
int main()
{
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        ll n, sum=0;
        cin>>n;
        ll a[n], curr=0, v[n], mx=LLONG_MIN;
        fl(i, 0, n)
        {
            cin>>a[i];
            sum+=a[i];
        }
        fl(i, 1, n)
        {
            curr+=a[i];
            mx = max(mx, curr);
            if(curr<0)
            curr=0;
        }
        curr=0;
        fl(i, 0, n-1)
        {
            curr+=a[i];
            mx = max(mx, curr);
            if(curr<0)
            curr=0;
        }
        if(mx>=sum)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
	return 0;
}
