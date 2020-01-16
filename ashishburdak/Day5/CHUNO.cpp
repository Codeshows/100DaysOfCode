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
	long n,k,ans=0;
	cin>>n>>k;
	umapll m;
	int s[n], chk[n]={0};
	fl(i, 0, n)
	{
	    cin>>s[i];
	    m[s[i]]++;
	}
	sort(s, s+n, greater<int>());
	fl(i, 0, n)
	{
	    if(chk[s[i]]==0)
	    {
	        ans+=m[s[i]];
	        chk[s[i]]=1;
	    }
	    if(ans>=k)
	    break;
	}
    cout<<ans<<endl;
	return 0;
}
