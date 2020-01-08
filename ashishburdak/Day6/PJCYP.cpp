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
	int n, f=0;
	cin>>n;
	mp m;
	vt a(n);
	fl(i, 0, n)
	{
	    cin>>a[i];
	    m[a[i]]++;
	}
	if(m[a[n-1]]&1)
	cout<<"Customer-A"<<endl;
	else
	{
	    for(auto it=m.rbegin();it!=m.rend();++it)
	    {
	        if(it->second&1)
	        {
	            f=1;
	            break;
	        }
	    }
	    if(f)
	    cout<<"Customer-A"<<endl;
	    else
	    cout<<"Customer-B"<<endl;
	}
	return 0;
}
