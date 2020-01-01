#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a,ans=0;
    cin>>a;
    ll t;
    t=a/100;
    ans+=t;
    a=a-100*t;
    t=a/20;
    ans+=t;
    a=a-20*t;
    t=a/10;
    ans+=t;
    a=a-10*t;
    t=a/5;
    ans+=t;
    a=a-5*t;
    t=a;
    ans+=t;
    cout<<ans;
    return 0;
}