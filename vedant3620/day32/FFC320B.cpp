#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
int main() {
	test(){
	    ll l,r,t;
	    cin>>l>>r;
	    if(l>r){
	       t=l;
	       l=r;
	       r=t;
	    }
	    ll x=r-l+1;
	    ll a=ceil(sqrt(l));
	    ll b=(ll)sqrt(r);
	    
	    x=x-(b-a+1);
	    
	    cout<<x<<endl;
	    
	    
	}
	return 0;
}
