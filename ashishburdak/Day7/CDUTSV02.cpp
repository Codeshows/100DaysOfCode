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
	int n;
	while(1)
	{
	    int f=0;
	    cin>>n;
	    if(n==0)
	    break;
	    long a[n], curr=1;
	    fl(i, 0, n)
	    cin>>a[i];
	    stack<long> s;
	    fl(i, 0, n)
	    {
	        if(a[i]==curr)
	        curr++;
	        else 
	        s.push(a[i]);
	        while(s.size() && s.top()==curr)
	        {
	            curr++;
	            s.pop();
	        }
	    }
	    if(curr==n+1)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
