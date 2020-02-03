#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n,x;
	    cin>>n>>x;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    ll c=0;
	    for(ll i=0;i<n;i++)
	        if(a[i]==x)
	            c++;
	    if(c==0)
	        cout<<"-1"<<endl;
	    else cout<<c<<endl;
	}
	return 0;
}