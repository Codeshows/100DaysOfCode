#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
    unordered_map <ll,ll> m;
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++){
        if(m.find(a[i])==m.end()){m.insert(make_pair(a[i],1));}
        else{m[a[i]]++;}
    }
    ll x=m.size();
    m.clear();
    ll ans=0;
    ll j=0;
    for(ll i=0;i<n;i++){
        j=max(j,i);
        while(j<n && m.size()!=x){
            if(m.find(a[j])==m.end()){m.insert(make_pair(a[j],1));}
            else{m[a[j]]++;}
            j++;
        }
        if(m.size()==x){
            ans+=(n-j+1);
        }
        if(m[a[i]]==1){
            m.erase(a[i]);
        }
        else{
            m[a[i]]--;
        }
    }
    cout<<ans<<endl;
	return 0;
}
