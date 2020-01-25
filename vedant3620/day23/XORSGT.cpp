#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
ll gcd(ll a,ll b){ 

int main() {
	test(){
	    ll l,r;
	    cin>>l>>r;
	    ll ans=0;
	    while(l%4!=0){
	        ans=ans^l;
	        l++;
	    }
	    while((r+1)%4!=0){
	        ans=ans^r;
	        r--;
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
