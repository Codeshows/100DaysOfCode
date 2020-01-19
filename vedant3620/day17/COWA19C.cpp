#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
int main() {
	test(){
	    ll n;
	    cin>>n;
	    vector <ll> v;
	    for(ll i=1;i<=sqrt(n);i++){
	        if(n%i==0){
	            v.push_back(i);
	            if(n/i!=i){
	                v.push_back(n/i);
	            }
	        }
	    }
	    ll ans=1;
	    for(ll i=0;i<v.size();i++){
	        ans=(ans*(1+v[i]))%1000000007;
	    }
	    cout<<ans-1<<endl;
	    
	}
	return 0;
}
