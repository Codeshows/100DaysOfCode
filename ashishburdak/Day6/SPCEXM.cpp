#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mp map<long, long>
#define um unordered_map<long, long>
#define pll pair<long, long>
#define st set<long> 
#define us unordered_set<long>
#define vt vector<long>
#define vp vector<pll>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)

int main() {
	// your code goes here
	int n,m,t;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
        double s=0;
	    long a[m][n], ans=0;
	    fl(i, 0, m)
	    {
	        fl(j, 0, n)
	        cin>>a[i][j];
	    }
	    vector<double> avg;
	    fl(i, 0, m)
	    {
	        s=0;
	        fl(j, 0, n)
	        s+=a[i][j];
	        avg.pb(s/n);
	    }
	    fl(i, 0, n)
	    {
	        fl(j, 0, m)
	        {
	            if(a[j][i]>avg[j])
	            {
	                ans++;
	                break;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
