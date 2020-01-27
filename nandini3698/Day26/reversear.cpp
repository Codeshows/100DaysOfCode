#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    ll i=0;
	    while(i*k<=n-1){
	        for(ll j=min((i+1)*k-1,n-1);j>=i*k;j--)
	            cin>>a[j];
	        i++;
	    }
	    for(ll i=0;i<n;i++)
	        cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}