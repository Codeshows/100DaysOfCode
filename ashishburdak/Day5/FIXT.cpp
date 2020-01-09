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
	int k;
	long a[1000005], x=5;
	a[1]=1;
	fl(i, 2, 1000005)
	{
	    a[i]=a[i-1]+x;
	    x+=4;
	}
	cin>>k;
	cout<<a[k]<<endl;
	return 0;
}
