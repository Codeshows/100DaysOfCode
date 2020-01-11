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
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)
 
int main()
{
    int tt=1;
    //cin>>tt;
    while(tt--)
    {
        long n, x=0, y=0;
        string s;
        cin>>n;
        cin>>s;
        fl(i, 0, n)
        {
            if(s[i]=='L')
            x++;
            else
            y++;
        }
        cout<<x+y+1<<endl;
    }
	return 0;
}
