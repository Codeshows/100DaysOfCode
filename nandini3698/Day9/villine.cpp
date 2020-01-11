#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
int main(){
    ll n,m,c;
    cin>>n;
    cin>>m>>c;
    ll s1=0,s2=0;
    while(n--){
        ll x,y,p;
        cin>>x>>y>>p;
        if((y-m*x-c)>0)
            s1+=p;
        else
            s2+=p;
    }
    if(s1>s2)
        cout<<s1<<endl;
    else
        cout<<s2<<endl;
}