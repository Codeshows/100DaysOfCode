#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
#define fr(i,m,n) for(ll i=m;i<n;i++)

void maxstr(string s){
    ll n=s.length();
    ll mx=1,start=0;

    for(ll i=1;i<n;i++){
        ll st=i-1,e=i;
        while(st>=0 && e<n && s[st]==s[e]){
            if(e-st+1>mx){
                start=st;
                mx=e-st+1;
            }
            st--;e++;
        }
        st=i-1;e=i+1;
        while(st>=0 && e<n && s[st]==s[e]){
            if(e-st+1>mx){
                start=st;
                mx=e-st+1;
            }
            st--;e++;
        }
    }
    for(ll i=start;i<start+mx;i++)
        cout<<s[i];
}

int main()
 {
	test{
	    string s;
	    cin>>s;
	    maxstr(s);
	    cout<<"\n";
	}
	return 0;
}