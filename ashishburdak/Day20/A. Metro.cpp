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
    int n,s,x, y;
    cin>>n>>s;
    vt a(n), b(n);
    fl(i, 0, n)
    cin>>a[i];
    fl(i, 0, n)
    cin>>b[i];
    if(a[0]==0)
    cout<<"NO"<<endl;
    else if(a[s-1])
    cout<<"YES"<<endl;
    else
    {
        x=s-1;
        while(1)
        {
            if((a[x]==1 && b[x]==1) || x>=n)
            break;
            x++;
        }
        if(x>=n || a[x]!=1 || b[x]!=1)
        cout<<"NO"<<endl;
        else
        {
            if(b[s-1])
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        
    }
    
	return 0;
}
