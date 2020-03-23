#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll x=0;
	for(ll i=0;i<n;i++){
		a[i]=a[i]+x;
		x=max(x,a[i]);
	}
	for(ll i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}
