#include <bits/stdc++.h>
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
	        
	    ll ar1[n],ar2[n];
	    ll mx1=a[0],mx2=a[n-1];
	    
	    for(ll i=0;i<n;i++){
	        if(a[i]>mx1)
	            mx1=a[i];
	        ar1[i]=mx1;
	    }
	    for(ll i=n-1;i>=0;i--){
	        if(a[i]>mx2)
	            mx2=a[i];
	        ar2[i]=mx2;
	    }

	    ll cap=0;
	    for(ll i=0;i<n;i++)
	        cap+=(min(ar1[i],ar2[i])-a[i]);
	    cout<<cap<<endl;
	}
	return 0;
}