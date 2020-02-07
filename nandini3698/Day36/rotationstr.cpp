#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
#define fr(i,m,n) for(ll i=m;i<n;i++)

int main()
 {
	test{
	    string s,t;
	    cin>>s;
	    cin>>t;
	    ll l=s.length();
	    string s1="";
	    string s2="";
	    for(ll i=2;i<l;i++)
	        s1+=s[i];
	    s1+=s[0];
	    s1+=s[1];
	    s2+=s[l-2];
	    s2+=s[l-1];
	    for(ll i=0;i<l-2;i++)
	        s2+=s[i];
	    if(s1==t || s2==t)
	        cout<<"1"<<endl;
	    else
	        cout<<"0"<<endl;
	}
	return 0;
}