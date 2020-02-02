#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

bool divcnt(ll n){
    if(n==1) return false;
    ll cnt=2;
    for(ll i=2;i*i<=n;i++)
        if(n%i==0)
            cnt++;
    if(cnt%2==0) return true;
    return false;
}

int main() {
	test{
	    ll l,r;
	    cin>>l>>r;
	    if(l>r){
	        ll t=l;
	        l=r;r=t;
	    }
	    ll c=r-l+1;
	    ll t=(ll)sqrt(l);
	    if(t*t!=l)
	        t++;
	    for(ll i=t;i*i<=r;i++)
	        c--;
	    cout<<c<<endl;
	}
	return 0;
}
