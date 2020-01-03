#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin>>s;
    ll l=s.length();
    ll a[l]={0};
    for(ll i=1;i<l;i++){
        if(s[i-1]==s[i]){
            a[i]=a[i-1]+1;
        }
        else{
            a[i]=a[i-1];
        }
    }
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++){
        ll x,y;
        cin>>x>>y;
        cout<<a[y-1]-a[x-1]<<endl;
    }
}

