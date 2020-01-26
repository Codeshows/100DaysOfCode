#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007

int main() {
	test(){
	    ll n;
	    string s;
	    cin>>n>>s;
	    ll ans=0;
	    for(ll i=0;i<n-3;i++){
	        if(s[i]=='J'&&s[i+1]=='G'&&s[i+2]=='E'&&s[i+3]=='C')
	            ans++;
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
