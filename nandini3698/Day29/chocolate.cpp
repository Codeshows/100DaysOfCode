#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    sort(a,a+n);
	    ll m;
	    cin>>m;
	    ll minm=a[m-1]-a[0];
	    for(ll i=1;i+m-1<n;i++)
	        minm=min(minm,a[i+m-1]-a[i]);
	    cout<<minm<<endl;
	}
	return 0;
}