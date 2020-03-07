#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long

ll power(ll n){
    ll t;
    if(n==0) return 1ll;
    t=power(n/2ll);
    if(n%2==0) return ((t%mod)*(t%mod))%mod;
    return (2*((t%mod)*(t%mod))%mod)%mod;
}

int main(){
    ll q;
    cin>>q;
    while(q--){
        ll n;
        cin>>n;
        if(n==1 || n==2 || n%2==0)
            cout<<"0"<<"\n";
        else{
            ll t=((n-1ll)/2ll)-1ll;
            cout<<power(t)%mod<<"\n";
        }
    }
    return 0;
}