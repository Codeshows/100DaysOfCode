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
    long n,t,x=1;
    cin>>n>>t;
    long a[n];
    fl(i, 0, n-1)
    cin>>a[i];
    while(1)
    {
        if(x>=n)
        break;
        if(x+a[x-1]==t)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(x+a[x-1]>t)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        x+=a[x-1];
    }
    cout<<"NO"<<endl;
	return 0;
}
