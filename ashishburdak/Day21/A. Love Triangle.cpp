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
    int n;
    cin>>n;
    int a[n+1], j;
    fl(i, 1, n+1)
    cin>>a[i];
    fl(i, 1, n+1)
    {
        j=a[i];
        fl(k, 0, 3)
        {
            j=a[j];
            if(j==a[i] && k==2)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
	return 0;
}
