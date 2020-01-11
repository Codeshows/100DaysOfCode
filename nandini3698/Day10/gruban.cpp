#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
    test{
        ll n,k;
        cin>>n>>k;
        ll p=k*(k+1)/2;
        
        if(p>n)
            cout<<"-1"<<endl;
        else{
            vector<ll>v;
            for(ll i=1;i<=sqrt(n);i++){
                if(n%i==0){
                    v.push_back(i);
                    if(n/i!=i)
                        v.push_back(n/i);
                }
            }
            ll res=0;
            for(ll i=0;i<v.size();i++){
                if(n/v[i]>=p)
                    res=max(v[i],res);
            }
            cout<<res<<endl;
        }
    }
    return 0;
}