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
        ll tt=1;
        cin>>tt;
        while(tt--)
        {
            ll n, s,f=0;
            cin>>n>>s;
            vt v(n);
            fl(i, 0, n)
            {
                cin>>v[i];
                if(v[i]<=s)
                f=1;
            }
            if(f==0)
            cout<<0<<endl;
            else
            {
                ll x=0, f=0, ans=0;
                fl(i, 0, n)
                {
                    x+=v[i];
                    if(x>s)
                    {
                        ans = max_element(v.begin(), v.begin()+i+1)-v.begin();
                        ans++;
                        break;
                    }
                    else if(x==s)
                    {
                        if(i==n-1)
                        break;
                        if(i+1<n)
                        {
                        if(*max_element(v.begin(), v.begin()+i+1)>=v[i+1])
                            ans = max_element(v.begin(), v.begin()+i+1)-v.begin();
                        else
                            ans = i+1;
                        }
                        else
                        {
                            ans = max_element(v.begin(), v.begin()+i+1)-v.begin();
                        }
                        ans++;
                        break;
                    }
                }
                cout<<ans<<endl;
            }
            
        }
        return 0;
    }
