#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mp map<long, long>
#define um unordered_map<long, long>
#define pll pair<long, long>
#define st set<long> 
#define us unordered_set<long>
#define vt vector<long>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)
 
ll si[1000005];
 
void sieve()
{
    si[0]=1;
    si[1]=1;
    for(int i=2;i*i<=1000000;++i)
    {
        if(si[i]==0)
        {
            for(int j=i*i;j<=1000000;j+=i)
            {
                if(si[j]==0)
                si[i]+=1;
                si[j]=1;
            }
        }
    }
}
 
int main()
{
    sieve();
	int t=1;
	cin>>t;
	while(t--)
	{
	    ll x, f=0;
	    cin>>x;
	    cout<<si[x]+1<<endl;
	}
	return 0;
}
