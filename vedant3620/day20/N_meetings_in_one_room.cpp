#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
struct vec{
    ll first;
    ll second;
    ll index;
};
bool fun(vec a,vec b){
    if(a.second<b.second) return true;
    else if(a.second==b.second && a.first<b.first) return true;
    else return false;
}
int main()
 {
    test(){
        
        ll n;
        cin>>n;
        vec v[n];
        for(ll i=0;i<n;i++){
            cin>>v[i].first;
        }
        for(ll i=0;i<n;i++){
            cin>>v[i].second;
        }
        for(ll i=0;i<n;i++){
            v[i].index=i+1;
        }
        sort(v,v+n,fun);
        ll ans=0,prev=0;
        for(ll i=0;i<n;i++){
            if(v[i].first>=prev){
                cout<<v[i].index<<" ";
                prev=v[i].second;
            }
            
        }
        cout<<endl;
    }	
    return 0;
}
