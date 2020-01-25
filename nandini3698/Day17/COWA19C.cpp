#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
#define mod 1000000007

int main(){
    test{
        ll n,ans=1;
        cin>>n;
        vector<int>v;
        for(ll i=1;i<=(ll)sqrt(n);i++){
            if(n%i==0){
                if(n/i==i)
                    v.push_back(i);
                else{
                    v.push_back(i);
                    v.push_back(n/i);
                }
            }
        }
        for(ll i=0;i<v.size();i++)
            ans=((ans%mod)*((1+v[i])%mod))%mod;
        cout<<(ans-1)<<endl;
    }
}