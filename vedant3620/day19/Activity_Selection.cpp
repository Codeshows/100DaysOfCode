#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
bool fun(pair<ll,ll> a,pair<ll,ll> b){
    if(a.second<b.second) return true;
    else if(a.second==b.second && a.first<b.first) return true;
    else return false;
}
int main()
 {
    test(){
        
        ll n;
        vector < pair<ll,ll> > v;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        for(ll i=0;i<n;i++){
            v.push_back(make_pair(a[i],b[i]));
        }
        sort(v.begin(),v.end(),fun);
        ll ans=0,prev=0;
        for(ll i=0;i<n;i++){
            if(v[i].first>=prev){
                ans++;
                prev=v[i].second;
            }
            
        }
        cout<<ans<<endl;
    }	
    return 0;
}
