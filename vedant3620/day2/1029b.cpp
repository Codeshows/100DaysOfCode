#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];

    }
    ll b[n]={0};
    for(ll i=0;i<n;i++)
        b[i]=1;
    for(ll i=1;i<n;i++){
        if(a[i]<=2*a[i-1]){
                b[i]=b[i-1]+1;
            }
    }
    ll m=0;
    for(ll i=0;i<n;i++){
        m=max(b[i],m);
    }
    cout<<m;
    return 0;
}
