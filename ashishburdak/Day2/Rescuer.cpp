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
#define fl(i, x, y) for(int i=x;i<y;++i)
#define flr(i, x, y) for(int i=x;i>=y;--i)

double dis(double x, double y)
{
    return sqrt(x*x+y*y);
}

int main()
{
	double x1, y1, x2, y2, v1, v2;
	int t;
	double ans,l,r,l1, l2, t1,t2;
	cin>>t;
	while(t--)
	{
    	cin>>x1>>y1>>x2>>y2>>v1>>v2;
    	l=x1;
    	r=x2;
    	if(l>r)
    	swap(l,r);
    	while((r-l)>0.000001)
    	{
    	    l1 = l + (r-l)/3;
    	    l2 = r - (r-l)/3;
    	    t1 = dis(l1 - x2, y2)/v2 + dis(l1 - x1, y1)/v1;
    	    t2 = dis(l2 - x2, y2)/v2 + dis(l2 - x1, y1)/v1;
    	    if(t1>t2)
    	    l = l1;
    	    else
    	    r = l2;
    	}
    	ans = dis(l - x2, y2)/v2 + dis(l - x1, y1)/v1;
	    cout<<setprecision(5)<<fixed<<ans<<endl;
	}
	return 0;
}
