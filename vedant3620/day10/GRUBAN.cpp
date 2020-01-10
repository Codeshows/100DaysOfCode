#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,val,i,ans;
        cin>>n>>k;
        vector<int> v;
        
        val=k*(k+1)/2;
        if(n<val)
            cout<<"-1"<<endl;

        else
        {
            
            for (int i=1; i<=sqrt(n); i++) 
            { 
                if (n%i==0) 
                { 
                    if (n/i == i)
                        v.push_back(i); 
                    else
                    { 
                        v.push_back(i);
                        v.push_back(n/i); 
                    } 
                } 
            }
            
            ans=0;
            for(i=0;i<v.size();i++)
            {
                if(n/v[i]>=val && v[i]>ans)
                    ans=v[i];
            }
            cout<<ans<<endl;
        }
    }
    
    return 0;
}            