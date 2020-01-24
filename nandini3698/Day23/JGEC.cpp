#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n,c=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(ll i=0;i<n-3;i++){
	        if(s[i]=='J' && s[i+1]=='G' && s[i+2]=='E' && s[i+3]=='C')
	            c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
