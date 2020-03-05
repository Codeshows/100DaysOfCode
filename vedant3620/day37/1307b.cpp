#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		ll maxv=0,flag=0;
		for(ll i=0;i<n;i++){
			if(a[i]==x) {
				flag=1;
				break;
			}
			else{
				maxv=max(a[i],maxv);
			}
		}
		if(flag==1){cout<<1<<endl;}
		else if(maxv<x){
			cout<<ceil(x/maxv)<<endl;
		}
		else{
			cout<<2<<endl;
		}
		}
		return 0;
	}
	

