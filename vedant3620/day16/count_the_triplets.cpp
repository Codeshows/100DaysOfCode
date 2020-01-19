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
        sort(a,a+n);
        ll ans=0;
        for(ll i=n-1;i>=0;i--){
            ll r=0,l=i-1;
            while(r<l){
                if(a[l]+a[r]==a[i]){ans++;r++;l--;}
                else if(a[l]+a[r]>a[i]){l--;}
                else{r++;}
            }
        }
        if(ans==0){
            cout<<-1<<endl;
        }else{
        cout<<ans<<endl;
        }
    }
	return 0;
}
