#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n;cin>>n;
	    ll a[n];
	    vector<ll>v;
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    ll cmax=a[n-1];
	    v.push_back(cmax);
	    for(ll i=n-2;i>=0;i--)
	        if(a[i]>=cmax){
	            cmax=a[i];
	            v.push_back(cmax);
	        }
	    for(ll i=v.size()-1;i>=0;i--)
	        cout<<v[i]<<" ";
	    cout<<endl;
	    
	}
	return 0;
}