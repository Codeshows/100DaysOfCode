#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
	ll n,t;
	cin>>n>>t;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll s[n+1];
	s[0]=0;
	for(ll i=1;i<=n;i++) s[i]=s[i-1]+a[i-1];
	ll ans=0;
	for(ll i=1;i<=n;i++){
		ll x=upper_bound(s+i,s+n+1,s[i-1]+t)-(s+i);
		ans=max(ans,x);		
	}
	cout<<ans;
	return 0;
}
