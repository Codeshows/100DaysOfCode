#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 998244353
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	vector <ll> v;
	ll ans1=0;
	for(ll i=0;i<n;i++){
		if(a[i]>n-k&&a[i]<=n){
			v.push_back(i);
			ans1+=a[i];
		}
	}
	ll ans2=1;
	for(ll i=0;i<v.size()-1;i++){
		ans2=(ans2*(v[i+1]-v[i]))%MOD;
	}
	cout<<ans1<<" "<<ans2;
	return 0;
}
