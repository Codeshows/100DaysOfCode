#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n;
	cin>>n;
	ll a[4]={0};
	ll t;
	
	for(ll i=0;i<n;i++){
		cin>>t;
		a[t-1]++;	
	}
	ll ans=0;
	ans+=a[3];
	ll x=min(a[2],a[0]);
	ans+=x;
	a[2]-=x;
	a[0]-=x;
	ans+=a[2];
	a[2]=0;
	ans+=a[1]/2;
	a[1]=a[1]%2;
	ans+=ceil((2*a[1]+a[0])/4.0);
	cout<<ans;
	
	
}
