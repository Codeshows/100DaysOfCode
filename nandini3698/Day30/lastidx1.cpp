#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    string s;
	    cin>>s;
	    ll c=0;
	    for(ll i=s.length()-1;i>=0;i--)
	        if(s[i]=='1'){
	            c++;
	            cout<<i<<endl;
	            break;
	        }
	    if(c==0)
	        cout<<"-1"<<endl;
	}
	return 0;
}