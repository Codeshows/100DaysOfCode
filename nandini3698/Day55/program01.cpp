// https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array/0
// Minimum element in a sorted and rotated array

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
#define fr(i,m,n) for(ll i=m;i<n;i++)

ll SRAmx(ll *a,ll s,ll e,ll n){
    if(s<=e){
        ll mid=s+(e-s)/2;
        //cout<<mid<<" ";
        if(mid==n-1 || a[mid]>a[mid+1])
            return mid;
        else if(a[mid]<a[0])
            return SRAmx(a,s,mid-1,n);
        else
            return SRAmx(a,mid+1,e,n);
    }
}

int main()
 {
	test{
	    ll n;cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    ll r=SRAmx(a,0,n-1,n);
	    if(r==n-1)
	        cout<<a[0]<<"\n";
	    else
	        cout<<a[r+1]<<"\n";
	}
	return 0;
}