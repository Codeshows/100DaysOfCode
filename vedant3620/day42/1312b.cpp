#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(ll i=n-1;i>=0;i--){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
