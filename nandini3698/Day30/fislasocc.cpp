#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n,c=0;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    ll k;
	    cin>>k;
	    for(ll i=0;i<n;i++)
	        if(a[i]==k){
	            c++;
	            cout<<i<<" ";
	            break;
	        }
	    for(ll i=n-1;i>=0;i--)
	        if(a[i]==k){
	            cout<<i<<endl;
	            break;
	        }
	    if(c==0)
	        cout<<"-1"<<endl;
	}
	return 0;
}