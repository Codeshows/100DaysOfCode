#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main()
 {
    test(){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=a[0],x=a[0];
        for(ll i=1;i<n;i++){
            x=max(a[i],a[i]+x);
            ans=max(ans,x);
        }
        cout<<ans<<endl;
    }
	return 0;
}