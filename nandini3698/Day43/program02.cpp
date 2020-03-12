#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
    ll n;
    cin>>n;
    vector<ll>a;
    unordered_map<ll,ll>m;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        m[x]++;
        if(m[x]==1)
            a.push_back(x);
    }
    ll k;
    cin>>k;
    sort(a.begin(),a.end());
    for(ll i=0;i<n;i++)
        if(m[a[i]]==k){
            cout<<a[i];
            break;
        }
    return 0;
}