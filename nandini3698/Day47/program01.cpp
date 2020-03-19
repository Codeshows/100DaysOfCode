#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
    ll n,ans=0;
    cin>>n;
    ll a[n];
    unordered_map<ll,ll>m; 
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(m.find(a[i])==m.end())
            m.insert(make_pair(a[i],1));
        else m[a[i]]++;
    }

    ll c=m.size();
    m.clear();

    ll j=-1;

    for(ll i=0;i<=n-c;i++){

        while(m.size()<c && j<n){
            j++;
            if(m.find(a[j])==m.end()) 
                m.insert(make_pair(a[j],1));
            else 
                m[a[j]]++;
        }

        if(m.size()==c)
            ans+=(n-j);
                    
        if(m[a[i]]==1)
            m.erase(a[i]);
        else
            m[a[i]]--;
        
    }
    cout<<ans;
    return 0;
}