#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
    string s;
    cin>>s;
    ll l=s.length();
    ll a[l]={0};
    ll w=0,v=0;
    for(ll i=0;i<l;i++){
    	if(s[i]=='v'){
    		v++;
		}
		else{
			w+=max(v-1,0LL);
			v=0;
			a[i]=w;
		}	
	}
	ll ans=0;
	w+=max(0LL,v-1);
	for(ll i=0;i<l;i++){
		if(s[i]=='o'){
			ans+=(a[i]*(w-a[i]));
		}
	}
	cout<<ans<<endl;
	return 0;
}
