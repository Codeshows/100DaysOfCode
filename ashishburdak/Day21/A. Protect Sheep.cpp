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
    int r,c;
    cin>>r>>c;
    string s[r];
    fl(i, 0, r)
    {
        cin>>s[i];
        fl(j, 0, c)
        if(s[i][j]=='.')
        s[i][j]='D';
    }
    fl(i, 0, r)
    {
        fl(j, 0, c)
        {
            if(s[i][j]=='W')
            {
                if(j-1>=0)
                {
                    if(s[i][j-1]=='S')
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
                if(j+1<c)
                {
                    if(s[i][j+1]=='S')
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
                if(i-1>=0)
                {
                    if(s[i-1][j]=='S')
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
                if(i+1<r)
                {
                    if(s[i+1][j]=='S')
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"YES"<<endl;
    fl(i, 0 ,r)
    cout<<s[i]<<endl;
	return 0;
}
