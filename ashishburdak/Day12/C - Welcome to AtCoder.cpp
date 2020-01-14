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
    long n,m,a, wanum=0, acnum=0;
    string b;
    cin>>n>>m;
    bool ac[n+1]={0};
    long wa[n+1]={0};
    while(m--)
    {
        cin>>a>>b;
        if(ac[a])
        continue;
        if(b=="AC")
        {
            ac[a]=true;
            acnum++;
            wanum+=wa[a];
        }
        else
        wa[a]++;
    }
    cout<<acnum<<" "<<wanum<<endl;
	return 0;
}
