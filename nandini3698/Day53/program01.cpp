// https://practice.geeksforgeeks.org/problems/toggle-bits-given-range/0
// Toggle bits given range

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
#define fr(i,m,n) for(ll i=m;i<n;i++)

void toggleBits(ll n,ll l,ll r){
    ll t=r-l;
    ll res=1;
    while(t--){
        res=res<<1;
        res=res|1;
    }
    res=res<<(l-1);
    cout<<(n^res)<<"\n";
}

int main()
 {
	test{
	    ll n,l,r;
	    cin>>n>>l>>r;
	    toggleBits(n,l,r);
	}
	return 0;
}