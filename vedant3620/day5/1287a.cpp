#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll p=0;
        ll ans=0;
        for(ll i=n-1;i>=0;i--){
                if(s[i]=='P'){
                    p++;
                }
                else{
                    ans=max(p,ans);
                    p=0;
                }

        }
        cout<<ans<<endl;
    }
    return 0;
}
