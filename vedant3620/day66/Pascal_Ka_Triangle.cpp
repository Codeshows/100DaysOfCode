#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007LL
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

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
ll modInverse(ll n, ll mod){
	return power(n, mod-2, mod);
}

int main() {
    SPEED;
    //CODE
    ll fac[1000001]; 
    fac[0] = 1; 
    for (ll i=1 ; i<=1000000; i++) 
        fac[i] = (fac[i-1]*i)%MOD; 
    ll inv[1000001];
    for(ll i=0;i<=1000000;i++){
        inv[i]=modInverse(fac[i],MOD)%MOD;
    }
    
    test(){
        ll a,b,n,m;
        cin>>a>>b>>n>>m;
        // cout<<solve(a,b,n,m)<<endl;
        if(m==1)cout<<a<<endl;
        else if(m>n+1)cout<<0<<endl;
        else if(m==n+1)cout<<b<<endl;
        else{
            ll x=(fac[n-1]*inv[m-1]%MOD*inv[n-m]%MOD)%MOD; 
            ll y=(fac[n-1]*inv[m-2]%MOD*inv[n-m+1]%MOD)%MOD; 
            ll ans=(((x*a)%MOD)+((y*b)%MOD))%MOD;
            cout<<ans<<endl;
        }
    }
	return 0;
}