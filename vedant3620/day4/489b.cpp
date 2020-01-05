#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,m;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    ll b[m];
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }
    ll i=0,j=0;
    ll ans=0;
    sort(a,a+n);
    sort(b,b+m);
    while(i<n&&j<m){
        if(a[i]==b[j]||a[i]==b[j]-1||a[i]==b[j]+1){
            ans++;
            i++;j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<ans;
    return 0;
}
