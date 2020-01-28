#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mp map<long, long>
#define um unordered_map<long, long>
#define pll pair<long, long>
#define st set<long> 
#define us unordered_set<long>
#define vt vector<long>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)

int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
	    long n, ans=0, x=0;
	    cin>>n;
	    vt t1(n), t2(n);;
	    fl(i, 0, n)
	    {
	        cin>>t1[i]>>t2[i];
	    }
	    sort(all(t1));
	    sort(all(t2));
	    int i=0, j=0;
	    while(i<n && j<n)
	    {
	        if(t1[i]<t2[j])
	        {
	            x++;
	            i++;
	            ans = max(ans, x);
	        }
	        else
	        {
	            j++;
	            x--;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
