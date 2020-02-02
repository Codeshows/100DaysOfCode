#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
int main() {
	ll n;
	string s;
	cin>>n>>s;
	ll a=0,ans=0;
	for(ll i=0;i<n;i++){
	    if(s[i]=='a'){
	        a++;
	    }
	    else{
	        a--;
	    }
	    if(a==-1) {ans++;a++;}
	}
	cout<<ans+a;
	return 0;
}