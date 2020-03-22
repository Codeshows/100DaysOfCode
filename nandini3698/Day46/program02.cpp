#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll x,y,s,t;
    cin>>x>>y>>s>>t;
    t-=(x+y);
    ll c=0;
    if(t<0)
        cout<<"0";
    else if(t==0)
        cout<<"1";
    else{
        for(ll i=x;i<=(x+s);i++)
            for(ll j=y;j<=(y+s);j++)
                if((i+j-x-y)<=t)
                    c++;
        
        cout<<c;
    }   
    return 0; 
}