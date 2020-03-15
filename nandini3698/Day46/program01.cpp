#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

ll binsearch(ll *a,ll s,ll e,ll t){
    if(s<=e){
        ll m=(s+e)/2;
        if(a[m]>=t && (m==0 || a[m-1]<t))
            return m;
        else if(a[m]<t)
            return binsearch(a,m+1,e,t);
        return binsearch(a,s,m-1,t);
    }
}

int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=1;i<n;i++)
        a[i]+=a[i-1];

    ll q;
    cin>>q; 
    while(q--){
        ll t,c=0;
        cin>>t;
        if(a[n-1]<t)
            cout<<"-1"<<"\n";
        else{
        ll idx=binsearch(a,0,n-1,t);
        cout<<(idx+1)<<"\n";
        }
        
    }
    return 0;
}