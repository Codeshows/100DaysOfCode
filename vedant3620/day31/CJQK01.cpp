#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
int main() {
	test(){
	    string s;
	    cin>>s;
	    ll n=s.length();
	    ll flag=0;
	    for(ll i=0;i<=n/2;i++){
	        if(s[i]!=s[n-i-1]){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<2<<endl;
	    }
	    
	    
	}
	return 0;
}
