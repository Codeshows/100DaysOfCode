#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main(){
    test(){
        ll e;
        cin>>e;
        unordered_map <ll,ll> m;
        for(ll i=0;i<e;i++){
            ll x,y;
            cin>>x>>y;
            if(m.find(x)==m.end()){
                m.insert(make_pair(x,1));
            }
            if(m.find(y)==m.end()){
                m.insert(make_pair(y,1));
            }
        }
        cout<<m.size()<<endl;
    }
    
    return 0;
}