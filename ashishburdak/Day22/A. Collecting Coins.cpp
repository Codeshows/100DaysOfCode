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
        ll n, x=0;
        ll a[3];
        cin>>a[0]>>a[1]>>a[2]>>n;
        sort(a, a+3);
        x+=(a[2]-a[0]);
        x+=(a[2]-a[1]);
        if(n<x)
        cout<<"NO"<<endl;
        else if((n-x)%3==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
