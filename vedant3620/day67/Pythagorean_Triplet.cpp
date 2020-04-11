#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

bool check(ll a[],ll n){
	for(ll i=n-1;i>1;i--){
	    ll l=0,r=i-1;
	    while(l<r){
	        if(a[l]+a[r]==a[i]) return true;
	        else if(a[l]+a[r]<a[i]){
	            l++;
	        }
	        else{
	            r--;
	        }
	    }
	}
	return false;
}
int main() {
    SPEED;
    //CODE
	test(){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];
		for(ll i=0;i<n;i++)a[i]*=a[i];
		sort(a,a+n);
		if(check(a,n)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}