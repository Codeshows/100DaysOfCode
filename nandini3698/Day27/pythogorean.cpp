#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n,c=0;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        ll x;cin>>x;
	        a[i]=x*x;
	    }
	    sort(a,a+n);
	    for(ll i=n-1;i>1;i--){
	        ll mn=0,mx=i-1;
	        while(mn<mx){
	            if(a[mn]+a[mx]==a[i]){
	                cout<<"Yes"<<endl;
	                c++;break;
	            }
	            else if(a[mx]+a[mn]>a[i])
	                mx--;
	            else
	                mn++;
	        }
	        if(c>0)
	            break;
	    }
	    if(c==0)
	        cout<<"No"<<endl;
	}
	return 0;
}