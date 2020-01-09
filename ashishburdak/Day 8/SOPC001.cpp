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
	int t, n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long a[n], mx=0, s=0, num=0;
	    fl(i, 0, n)
	    {
	        cin>>a[i];
	        mx = max(mx, a[i]);
	    }
	    fl(i, 0, n)
	    {
	        if(a[i]!=mx)
	        {
	            s+=(mx-a[i]);
	            num++;
	        }
	    }
	    cout<<s<<" "<<num+1<<endl;
	}
	return 0;
}
