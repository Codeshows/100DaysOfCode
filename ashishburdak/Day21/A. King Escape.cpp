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
    ll n, a[2], b[2], c[2], mx, mn;
    cin>>n;
    cin>>a[0]>>a[1];
    cin>>b[0]>>b[1];
    cin>>c[0]>>c[1];
    mx = max(b[0], c[0]);
    mn = min(b[0], c[0]);
    if(a[0]>=mn && a[0]<=mx)
    cout<<"NO"<<endl;
    else
    {
        mx = max(b[1], c[1]);
        mn = min(b[1], c[1]);
        if(a[1]>=mn && a[1]<=mx)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    
	return 0;
}
