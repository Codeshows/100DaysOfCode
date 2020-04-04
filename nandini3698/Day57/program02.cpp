// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0
// Search in a Rotated Array

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
#define fr(i,m,n) for(ll i=m;i<n;i++)

ll SRAmx(ll *a,ll s,ll e,ll n){
    if(s<=e){
        ll mid=s+(e-s)/2;
        if(mid==n-1 || a[mid]>a[mid+1])
            return mid;
        if(a[mid]<a[0]) return SRAmx(a,s,mid-1,n);
        return SRAmx(a,mid+1,e,n);
    }
}

ll binsearch(ll *a,ll s,ll e,ll k){
    if(s<=e){
        ll mid=s+(e-s)/2;
        if(a[mid]==k) return mid;
        if(a[mid]<k) return binsearch(a,mid+1,e,k);
        return binsearch(a,s,mid-1,k);
    }
    return -1;
}

int main()
 {
	test{
	    ll n;cin>>n;
	    ll A[n];
	    for(ll i=0;i<n;i++)
	        cin>>A[i];
	    ll k;cin>>k;
	    ll mx=SRAmx(A,0,n-1,n);
	    ll a,b;
	    //cout<<mx<<" ";
	    if(mx==n-1)
	        cout<<binsearch(A,0,n-1,k)<<"\n";
	    else{
	        a=binsearch(A,0,mx,k);
	        b=binsearch(A,mx+1,n-1,k);
	        cout<<max(a,b)<<"\n";
	    }
	}
	return 0;
}