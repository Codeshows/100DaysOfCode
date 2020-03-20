#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll b[100001];
    memset(b,100001,0);
    for(ll i=0;i<n;i++){
        b[a[i]]++;
    }
    ll k;
    cin>>k;
    for(ll i=0;i<100001;i++){
        if(b[i]>0 && b[i]==k){
            cout<<i<<endl;
            break;
        }
    }
}