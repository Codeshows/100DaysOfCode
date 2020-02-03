#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    string s;
	    cin>>s;
	    vector<string>v;
	    ll n=s.length();
	    for(ll i=0;i<n;i++){
	        string t="";
	        while(s[i]!='.' && i<n){
	            t=t+s[i];
	            i++;
	        }
	        v.push_back(t);
	    }
	    for(ll i=v.size()-1;i>0;i--)
	        cout<<v[i]<<".";
	    cout<<v[0];
	    cout<<endl;
	}
	return 0;
}