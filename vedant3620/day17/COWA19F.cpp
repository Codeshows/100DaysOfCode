#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
int main() {
	test(){
	    string s;
	    cin>>s;
	    ll a[26]={0};
	    for(ll i=0;i<s.length();i++){
	        a[s[i]-'a']++;
	    }
	    for(ll i=25;i>=0;i--){
	        while(a[i]--){
	            cout<<(char)(i+'a');
	        }
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}

