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
    int n,m;
    cin>>n>>m;
    string s[n], t[m];
    fl(i, 0, n)
    cin>>s[i];
    fl(i, 0, m)
    cin>>t[i];
    long q, x;
    cin>>q;
    while(q--)
    {
        cin>>x;
        cout<<s[(x-1)%n]<<t[(x-1)%m]<<endl;
    }
	return 0;
}
