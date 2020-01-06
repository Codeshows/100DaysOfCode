#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll m,n;
    cin>>m>>n;
    string s1[m];
    for(ll i=0;i<m;i++){
        cin>>s1[i];
    }
    string s2[n];
    for(ll i=0;i<n;i++){
        cin>>s2[i];
    }
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++){
        ll a;
        cin>>a;
        ll x,y;
        x=a%m;
        x--;
        y=a%n;
        y--;
        if(x<0){
            x+=m;
        }
        if(y<0)
            y+=n;
        cout<<s1[x]<<s2[y]<<endl;

    }
    return 0;
}
