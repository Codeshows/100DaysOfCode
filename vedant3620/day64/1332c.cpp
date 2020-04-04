#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
	test(){
		ll n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		ll a[26][k];
		for(ll i=0;i<26;i++){
			for(ll j=0;j<k;j++){
				a[i][j]=0;
			}
		}
		for(ll i=0;i<n;i++){
			a[s[i]-'a'][i%k]++;
		}
		ll ans=0;
		for(ll i=0;i<k;i++){
			ll z=0;
			for(ll j=0;j<26;j++){
				z=max(z,a[j][i]+a[j][k-i-1]);
				
			}
			ans+=((2*(n/k))-z);
		}
		cout<<ans/2<<endl;
	}
	return 0;
}
