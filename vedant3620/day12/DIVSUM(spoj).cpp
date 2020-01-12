#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main(){
	test(){
		ll n;
		cin>>n;
		ll ans=0;
		for(ll i=1;i<=sqrt(n);i++){
			if(n%i==0){
				ans+=i;
				if(n/i!=i&&i!=1){
					ans+=n/i;
				}
			}
		}
		if(n==1)
			cout<<0<<endl;
		else
			cout<<ans<<endl;
	}
	
}
