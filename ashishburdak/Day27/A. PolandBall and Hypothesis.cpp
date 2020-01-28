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
 
bool  si[1000005];
void sieve()
{
    memset(si, true, sizeof(si));
    si[0]=false;
    si[1]=false;
    for(int i=2;i*i<=1000005;++i)
    {
        if(si[i]==true)
        {
            for(int j=i*i;j<=1000005;j+=i)
            si[j]=false;
        }
    }
}
 
int main()
{
    sieve();
    int n,m=1;
    cin>>n;
    while(1)
    {
        if(si[m*n+1]==false)
        {
            cout<<m<<endl;
            return 0;
        }
        m++;
    }
    
	return 0;
}
