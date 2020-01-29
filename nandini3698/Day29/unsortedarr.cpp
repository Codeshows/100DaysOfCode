#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main()
{
	test{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    ll b[n]={};
	    ll maxm=a[0];
	    for(ll i=1;i<n-1;i++){
	        if(maxm<=a[i]){
	            maxm=a[i];
	            b[i]=1;
	        }
	    }
	    ll minm=a[n-1];
	    for(ll i=n-2;i>0;i--){
	        if(minm>=a[i])
	            minm=a[i];
	        else
	            b[i]=0;
	    }
	    int c=0;
	    for(ll i=0;i<n;i++)
	        if(b[i]==1){
	            cout<<a[i]<<endl;
	            c++;break;
	        }
	    if(c==0)
	        cout<<"-1"<<endl;
	}
	return 0;
}