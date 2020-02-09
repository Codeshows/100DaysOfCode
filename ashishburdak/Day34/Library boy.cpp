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
#define um unordered_map<char, long>
#define pll pair<long, long>
#define st set<long> 
#define us unordered_set<long>
#define vt vector<long>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)
 
int main()
{
	ll t=1,ans=0;
	cin>>t;
	um m;
	while(t--)
	{
	    string s;
	    cin>>s;
	    m[s[0]]++;
	}
	for(auto it:m)
	{
	    if(it.ss>10)
	    {
	        if(it.ss%10==0)
	        ans+=((it.ss/10)-1);
	        else
	        ans+=(it.ss/10);
	    }
	}
	cout<<ans+m.size()<<endl;
	return 0;
}
