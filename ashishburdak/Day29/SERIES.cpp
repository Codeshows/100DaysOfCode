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

bool chk=false;

bool ap(vt v)
{
    bool f=true;
    ll d = v[1]-v[0];
    fl(i, 2, v.size())
    {
       if(v[i]-v[i-1]!=d)
       {
           f=false;
           break;
       }
    }
    return f; 
}

void case1(vt a)
{
    vt v;
    ll d = a[1]-a[0], l=1;
    fl(i, 2, a.size())
    {
        if(a[i]-a[l]==d)
        l=i;
        else
        v.pb(a[i]);
    }
    if(ap(v))
    chk=true;
}
void case2(vt a)
{
    vt v;
    ll d = a[2]-a[0], l=2;
    v.pb(a[1]);
    fl(i, 3, a.size())
    {
        if(a[i]-a[l]==d)
        l=i;
        else
        v.pb(a[i]);
    }
    if(ap(v))
    chk=true;
}
void case3(vt a)
{
    vt v;
    ll d = a[2]-a[1], l=2;
    v.pb(a[0]);
    fl(i, 3, a.size())
    {
        if(a[i]-a[l]==d)
        l=i;
        else
        v.pb(a[i]);
    }
    if(ap(v))
    chk=true;
}

int main() {
	// your code goes here
	ll n;
	cin>>n;
	vt a(n);
	fl(i, 0, n)
	cin>>a[i];
	case1(a);
	case2(a);
	case3(a);
	if(chk)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
}
