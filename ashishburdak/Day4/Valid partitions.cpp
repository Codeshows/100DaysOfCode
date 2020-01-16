#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define first ff
#define second ss
#define pb push_back
#define all(x) x.begin(), x.end()
#define mapll map<long, long>
#define mapcl map<char, long>
#define mapsl map<string, long>
#define umapll unordered_map<long, long>
#define umapcl unordered_map<char, long>
#define umapsl unordered_map<string, long>
#define pll pair<long, long>
#define setl set<long> 
#define usetl unordered_set<long>
#define vtl vector<long>
#define fl(i, x, y) for(ll i=x;i<y;++i)
#define flr(i, x, y) for(ll i=x;i>=y;--i)

int main()
{
	int t=1, k, x, y;
	cin>>t;
	while(t--)
	{
	    y=0;
	    string s, ans="";
	    cin>>s>>k;
	        for(int i=0;i<s.length();i+=k)
	        {
	            if(i==s.length()-1)
	            {
	                ans+=(s.substr(i, k));
	                x = 1;
	            }
	            else if(i+k>=s.length())
	            {
	                ans+=(s.substr(i, s.length()-i));
	                x = s.length()-i;
	            }
	            else
	            {
	                ans+=(s.substr(i, k));
	                ans+="-";
	                y++;
	            }
	        }
	        //cout<<y<<endl;
	        if((x==k || x==k-1) && (y+1>=k))
	        cout<<ans<<endl;
	        else
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
