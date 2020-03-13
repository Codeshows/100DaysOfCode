#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
    ll n;
	cin>>n;
	ll a;
	ll x=0,y=0,z=-10000000000;
	for(ll i=0;i<n;i++){
	    cin>>a;
	    if(a>=0){
	        x+=a;
	        y++;
	    }
	    else{
	        z=max(z,a);
	    }
	}
	if(y>0)
	    cout<<x<<" "<<y;
	else{
	    cout<<z<<" "<<1<<endl;
	}
	return 0;
}
