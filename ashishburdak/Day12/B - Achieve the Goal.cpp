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
    int n, k,m, s=0;
    cin>>n>>k>>m;
    int a[n];
    fl(i, 0, n-1)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s>(m*n))
    {
        cout<<0<<endl;
        return 0;
    }
    int x = m*n-s;
    if(x<=k)
    cout<<x<<endl;
    else
    cout<<-1<<endl;
	return 0;
}
