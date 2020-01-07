#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mapll map<long, long>
#define umapll unordered_map<long, long>
#define pll pair<long, long>
#define setl set<long> 
#define usetl unordered_set<long>
#define vtl vector<long>
#define vpll vector<pll>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)

vtl factors(long x)
{
    vtl v;
    for(long i=1;i<=sqrt(x);++i)
    {
        if(x%i==0)
        {
            if(i==x)
            v.pb(i);
            else
            {
                v.pb(x/i);
                v.pb(i);
            }
        }
    }
    return v;
}
int main() {
	// your code goes here
	long x,y, ans=0;
	cin>>x>>y;
	vtl a,b;
	a = factors(x);
	b = factors(y);
	/*fl(i, 0, a.size())
	cout<<a[i]<<" ";
	cout<<endl;
	fl(i, 0, b.size())
	cout<<b[i]<<" ";
	cout<<endl;*/
	sort(all(a));
	sort(all(b));
	fl(i, 0, min(a.size(), b.size()))
	{
	    if(a[i]==b[i])
	    ans++;
	}
	cout<<ans<<endl;
	return 0;
}
