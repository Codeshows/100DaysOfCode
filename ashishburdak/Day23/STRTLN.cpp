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
	int t;
	cin>>t;
	while(t--)
    {
        ll n, x, y, p, ans=0;
        um mx, my;
        cin>>n;
        p = (n*(n-1))/2;
        ans=p;
        while(n--)
        {
           cin>>x>>y;
           mx[x]++;
           my[y]++;
        }  
        for(auto it:mx)
        {
            p = (it.ss*(it.ss-1))/2;
            ans-=(p);
        }
        for(auto it:my)
        {
            p = (it.ss*(it.ss-1))/2;
            ans-=(p);
        }
        cout<<ans<<endl;
    }
	return 0;
}
