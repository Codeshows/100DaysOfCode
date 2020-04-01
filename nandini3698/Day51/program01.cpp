#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

ll setbit(ll n){
    ll res=0;
    while(n>0){
        n=n&(n-1);
        res++;
    }
    return res;
}

ll power(ll a, ll b, ll mod){
	ll x = 1, y = a;
	while (b > 0){
		if (b%2){
			x = (x*y)%mod;
		}
		y = (y*y)%mod;
		b /= 2;
	}
	return x%mod;
}

int main() {
	test{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    ll ans=1,k=0;
	    for(ll i=0;i<n-1;i++){
	        ll res=setbit(a[i]);
	        ans=(ans*power(2,res,1000000007))%1000000007;
	        if(setbit(a[i])>setbit(a[i+1])){
	            k++;break;
	        }
	    }
        if(k)
            ans=0;
	    cout<<ans%1000000007<<"\n";
	}
	return 0;
}
