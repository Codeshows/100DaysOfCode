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
    vector <ll> a(n);
    for(ll i=0;i<n;i++){
    	cin>>a[i];
	}
	for(ll i=0;i<n;i++){
		ll t;
		cin>>t;
		a[i]-=t;
	}
	sort(a.begin(),a.end());
	ll ans=0;
	for(ll i=0;i<n;i++){
		ll z=lower_bound(a.begin(),a.end(),1-a[i])-a.begin();
		ans+=(n-z);
		if(i>=z){
			ans--;
		}
	}
	cout<<ans/2<<endl;
	return 0;
}
