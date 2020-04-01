#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
	test(){
		ll n,x;
		cin>>n>>x;
		ll a[n];
		for(ll i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		ll ans=0;
		for(ll i=0;i<n;i++){
		    if(a[i]<=x){
		        ll x1=x-a[i];
		        ll l=i+1,r=n-1;
		        while(l<r){
		            if(a[l]+a[r]==x1){ans=1; break;}
		            else if(a[l]+a[r]<x1)l++;
		            else r--;
		        }
		    }
		    else{
		        break;
		    }
		}
		cout<<ans<<endl;
	}
	return 0;
}