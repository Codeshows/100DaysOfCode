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
    int tt=1, n;
    cin>>tt;
    while(tt--)
    {
        string s;
        cin>>n;
        cin>>s;
        int j, mx=0, x=0;
        fl(i, 0, s.length())
        {
            if(s[i]=='A')
            {
                x=0;
                j=i+1;
                while(s[j]=='P')
                {
                    j++;
                    x++;
                }
                mx = max(mx, x);
                i=j-1;
            }
        }
        cout<<mx<<endl;
    }
	return 0;
}
