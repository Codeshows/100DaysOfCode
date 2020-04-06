#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

ll findPivot(ll a[],ll l,ll h,ll n){
    
    ll mid=(l+h)/2;
    if(h-l==1){
        if(a[l]>a[h])return l;
        else return h;
    }
    if(mid==l) return mid;
    else{
        if(a[mid]>a[mid-1]&&a[mid]>a[mid+1]) return mid;
        else if(a[mid]>=a[l]) findPivot(a,mid+1,h,n);
        else findPivot(a,l,mid-1,n);
    }
}
ll binarySearch(ll a[],ll l,ll h,ll x){
    if(l>h)return -1;
    ll mid=(l+h)/2;
    if(a[mid]==x)return mid;
    if(a[mid]>x) return binarySearch(a,l,mid-1,x);
    else return binarySearch(a,mid+1,h,x);
}
int main() {
    SPEED;
    //CODE
	test(){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];
		ll x;
		cin>>x;
		ll pivot=findPivot(a,0,n-1,n);
		if(a[pivot]==x){
		    cout<<pivot<<endl;
		}
		else{
		    if(a[0]<=x) cout<<binarySearch(a,0,pivot-1,x)<<endl;
		    else cout<<binarySearch(a,pivot+1,n-1,x)<<endl;
		}
	}
	return 0;
}