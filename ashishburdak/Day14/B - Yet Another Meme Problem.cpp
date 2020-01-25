
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ld long double
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mp map<long, long>
#define um unordered_map<long, long>
#define st set<long> 
#define us unordered_set<long>
#define vt vector<long>
#define pll pair<long, long>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)
 
int main()
{
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        ll a, b, x, dig=0, f=0;
        cin>>a>>b;
        x=b;
        while(x>0)
        {
            if(x%10!=9)
            f=1;
            dig++;
            x/=10;
        }
        if(f)
        dig--;
        cout<<dig*a<<endl;
    }
	return 0;
}
