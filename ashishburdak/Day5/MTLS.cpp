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

int main() {
	// your code goes here
	string s,t, y;
	cin>>s>>t;
	long x=0;
	fl(i, 0 , s.length()-t.length()+1)
	{
	    y = s.substr(i, t.length());
	    if(y==t)
	    x++;
	}
	cout<<x<<endl;
	return 0;
}
