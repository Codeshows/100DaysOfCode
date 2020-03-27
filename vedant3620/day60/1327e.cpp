#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 998244353
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
ll power(ll x,ll y){
	ll ans=1;
	x=x%MOD;
	while(y>0){
		if(y&1)ans=(ans*x)%MOD;
		y/=2;
		x=(x*x)%MOD;
    }
	return ans%MOD;
}

int main() {
    SPEED;
    //CODE
		ll n;
		cin>>n;
		for(ll i=1;i<=n;i++){
			if(i==n){
				cout<<"10"<<endl;
			}
			else{
				ll ans=0;
				if(n-i-1>=0){
					ans+=(2*10*9*power(10,n-i-1));
				}
				if(n-i-2>=0){
					ans+=((n-i-1)*10*9*9*power(10,n-i-2));
				}
				cout<<ans%MOD<<" ";
			}
		}
		
		
	return 0;
}
