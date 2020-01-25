#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
int main() {
	test(){
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        
	    }
	    sort(a,a+n);
	    ll ans=a[0];
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}

