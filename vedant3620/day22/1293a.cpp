#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,s,k;
		cin>>n>>s>>k;
		vector <ll> a(k);
		for(ll i=0;i<k;i++){
			cin>>a[i];	
		}
		for(ll i=0;i<=k;i++){
			if(s-i>=1 && find(a.begin(),a.end(),s-i)==a.end()){
				cout<<i<<endl; break;
			}
			else if(s+i<=n && find(a.begin(),a.end(),s+i)==a.end()){
				cout<<i<<endl; break;
			}
		}
	}
	return 0;
	
}
