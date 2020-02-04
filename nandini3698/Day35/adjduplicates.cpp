#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
#define fr(i,m,n) for(ll i=m;i<n;i++)

string fun(string s){
    int c=0;
    string t="";
    for(ll i=0;i<s.length();i++){
	    if(s[i]==s[i+1])
	        while(s[i]==s[i+1]){
	            i++;
	        }
	    else
	        t=t+s[i];
	 }
	 for(ll i=0;i<t.size();i++)
	    if(t[i]==t[i+1]){
	        c++;break;
	    }
	 if(c==0)
	    return t;
	 else
	    return fun(t);
}

int main()
 {
	test{
	    string s;
	    cin>>s;
	    string t=fun(s);
	    cout<<t;
	    cout<<endl;
	    
	}
	return 0;
}