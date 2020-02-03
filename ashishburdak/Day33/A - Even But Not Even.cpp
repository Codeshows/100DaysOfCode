#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ld long double
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mp map<ll, ll>
#define um unordered_map<ll, ll>
#define st set<ll> 
#define us unordered_set<ll>
#define vt vector<ll>
#define pll pair<ll, ll>
#define fl(i, x, y) for(ll i=x;i<y;++i)
#define flr(i, x, y) for(ll i=x;i>=y;--i)
 
int main()
{
    ll tt=1;
    cin>>tt;
    while(tt--)
    {
        ll n, f, l, sum=0;
        cin>>n;
        string s;
        cin>>s;
        l = s.length()-1;
        if(n==1)
        cout<<-1<<endl;
        else
        {
            while((s[l]-'0')%2==0 && l>0)
            l--;
            if((s[l]-'0')%2==0)
            cout<<-1<<endl;
            else
            {
                f=l;
                sum+=(s[f]-'0');
                while(sum&1 && f>0)
                {
                    f--;
                    sum+=(s[f]-'0');
                }
                if(sum&1)
                cout<<-1<<endl;
                else
                {
                    cout<<s.substr(f, l-f+1)<<endl;
                }
                
            }
            
        }
    }
	return 0;
}
