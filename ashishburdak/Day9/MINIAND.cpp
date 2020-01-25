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
	long n,t,l,r,q,x;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vt a(n), v(n);
	    fl(i, 0, n)
	    {
	        cin>>a[i];
	    }
	    if(a[0]&1)
	    v[0]=0;
	    else
	    v[0]=1;
	    fl(i, 1, n)
	    {
	        if(a[i]&1)
	        v[i]=v[i-1];
	        else
	        v[i]=v[i-1]+1;
	    }
	    cin>>q;
	    while(q--)
	    {
	        cin>>l>>r;
	        l--;
	        r--;
	        if(l==0)
	        {
	            if(v[r]==0)
	            cout<<"ODD"<<endl;
	            else
	            cout<<"EVEN"<<endl;
	        }
	        else
	        {
	            if(v[r]-v[l-1]>0)
	            cout<<"EVEN"<<endl;
	            else
	            cout<<"ODD"<<endl;
	        }
	    }
	}
	return 0;
}
