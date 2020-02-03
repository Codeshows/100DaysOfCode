#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
#define fr(i,m,n) for(ll i=m;i<n;i++)

int main()
 {
	test{
	    ll n;
	    cin>>n;
	    int a[n+1]={};
	    fr(i,0,n){
	        ll t;
	        cin>>t;
	        a[t]++;
	    }
	    fr(i,1,n+1)
	        if(a[i]==2){
	            cout<<i<<" ";
	            break;}
	    
	    fr(i,1,n+1)
	        if(a[i]==0){
	            cout<<i<<endl;
	            break;}
	    
	}
	return 0;
}