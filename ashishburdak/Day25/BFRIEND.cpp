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
	long t,n,a,b,c;
	cin>>t;
	while(t--)
	{
	    long a_up=-1,a_down=-1, b_up=-1, b_down=-1, ans=0, x, y;
	    cin>>n>>a>>b>>c;
	    ans=c;
	    vt f(n);
	    fl(i, 0, n)
	    cin>>f[i];
	    sort(all(f));
	    if(find(all(f), a)!=f.end() || find(all(f), b)!=f.end())
	    {
	        cout<<c+(abs(a-b))<<endl;
	    }
	    else
	    {
	        a_up = *upper_bound(all(f), a);
	        if(a_up<=a)
	        a_up = -1;
	        a_down = *lower_bound(all(f), a);
	        if(a_down>=a)
	        a_down = -1;
	        
	        b_up = *upper_bound(all(f), b);
	        if(b_up<=b)
	        b_up = -1;
	        b_down = *lower_bound(all(f), b);
	        if(a_down>=b)
	        b_down = -1;
	        
	        if(a_up==-1)
	        {
	            if(b_up==-1)
	            {
	                ans+=(min(abs(b-b_down)+abs(b_down-a), abs(b-a_down)+abs(a_down-a)));
	            }
	            else if(b_down==-1)
	            {
	                ans+=(min(abs(b-b_up)+abs(b_up-a), abs(b-a_down)+abs(a_down-a)));
	            }
	            else
	            {
	                ans+=(min(min(abs(b-b_down)+abs(b_down-a), abs(b-a_down)+abs(a_down-a)), 
	                min(abs(b-b_up)+abs(b_up-a), abs(b-a_down)+abs(a_down-a))));
	            }
	        }
	        else if(a_down==-1)
	        {
	            if(b_up==-1)
	            {
	                ans+=(min(abs(b-b_down)+abs(b_down-a), abs(b-a_up)+abs(a_up-a)));
	            }
	            else if(b_down==-1)
	            {
	                ans+=(min(abs(b-b_up)+abs(b_up-a), abs(b-a_up)+abs(a_up-a)));
	            }
	            else
	            {
	                ans+=(min(min(abs(b-b_down)+abs(b_down-a), abs(b-a_up)+abs(a_up-a)), 
	                min(abs(b-b_up)+abs(b_up-a), abs(b-a_up)+abs(a_up-a))));
	            }
	        }
	        else
	        {
	            if(b_up==-1)
	            {
	                ans+=(min(min(abs(b-b_down)+abs(b_down-a), abs(b-a_up)+abs(a_up-a)),
	                min(abs(b-b_down)+abs(b_down-a), abs(b-a_down)+abs(a_down-a))));
	            }
	            else if(b_down==-1)
	            {
	                ans+=(min(min(abs(b-b_up)+abs(b_up-a), abs(b-a_up)+abs(a_up-a)),
	                min(abs(b-b_up)+abs(b_up-a), abs(b-a_down)+abs(a_down-a))));
	            }
	            else
	            {
	                x = (min(min(abs(b-b_down)+abs(b_down-a), abs(b-a_up)+abs(a_up-a)), 
	                min(abs(b-b_up)+abs(b_up-a), abs(b-a_up)+abs(a_up-a))));
	                y = (min(min(abs(b-b_down)+abs(b_down-a), abs(b-a_down)+abs(a_down-a-a)), 
	                min(abs(b-b_up)+abs(b_up-a), abs(b-a_down)+abs(a_down-a))));
	                ans+=(min(x, y));
	            }
	        }
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
