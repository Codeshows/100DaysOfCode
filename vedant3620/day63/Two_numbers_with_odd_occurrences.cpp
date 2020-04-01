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
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];
		ll x =0;
		for(ll i=0;i<n;i++){
		    x=x^a[i];
		}
	    ll k=1;
	    while(!(x&(1<<(k-1)))) k++;
		
		ll ans1=0;
		for(ll i=0;i<n;i++){
		    if(a[i]&(1<<(k-1)))ans1=ans1^a[i];
		}
		ll ans2=x^ans1;
		cout<<max(ans1,ans2)<<" "<<min(ans1,ans2)<<endl;
		
	}
	return 0;
}