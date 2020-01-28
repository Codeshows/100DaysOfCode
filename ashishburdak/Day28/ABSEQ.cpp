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
	ll l, ans=0;
	cin>>l;
	string s;
	cin>>s;
	stack<char> t;
	fl(i, 0, s.length())
	{
	    if(s[i]=='a')
	        t.push(s[i]);
	    else if(t.size()>0)
	        t.pop();
	    else
	        ans++;
	}
	ll p = t.size();
	cout<<p+ans<<endl;
	return 0;
}
