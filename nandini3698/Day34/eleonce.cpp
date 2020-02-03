#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
#define fr(i,m,n) for(ll i=m;i<n;i++)

ll find(ll *a,ll p,ll r){
    ll q=(p+r)/2;
    if(a[q]!=a[q-1] && a[q]!=a[q+1])
        return a[q];
    if(a[q]==a[q+1]){
        if(q%2==0)
            return find(a,q+2,r);
        return find(a,p,q-1);
    }
    if(a[q]==a[q-1]){
        if(q%2==0)
            return find(a,p,q-2);
        return find(a,q+1,r);
    }
}

int main()
 {
	test{
	    ll n;
	    cin>>n;
	    ll a[n];
	    fr(i,0,n)
	        cin>>a[i];
	    
	    ll ans=find(a,0,n-1);
	    
	    cout<<ans<<endl;
	}
	return 0;
}