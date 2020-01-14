#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    ll a[61];
    a[1]=0;
    a[2]=2;
    for(ll i=3;i<=60;i++){
        a[i]=a[i-2]*2;
    }
    cout<<a[n]<<endl;
}
