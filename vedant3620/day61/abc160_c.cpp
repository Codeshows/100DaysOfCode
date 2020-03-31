#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
	ll k,n;
	cin>>k>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	ll ans=a[n-1]-a[0];
	for(ll i=1;i<n;i++){
		ans=min(ans,a[i-1]-a[i]+k);
	}
	cout<<ans;
	return 0;
}
