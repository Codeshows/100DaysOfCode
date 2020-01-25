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
    vt a(n+1), ans;
    um m;
    fl(i, 1, n+1)
    cin>>a[i];
    fl(i, 1, n+1)
    {
        m.clear();
        m[i]++;
        int j=a[i];
        while(1)
        {
            m[j]++;
            if(m[j]>=2)
            {
                ans.pb(j);
                break;
            }
            j = a[j];
        }
    }
    fl(i, 0, ans.size())
    cout<<ans[i]<<" ";
    cout<<endl;
	return 0;
}
