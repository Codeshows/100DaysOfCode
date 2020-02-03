#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	ll l;
	cin>>l;
	string s;
	cin>>s;
	ll cnt=0,ans=l;
	for(ll i=0;i<s.size();i++){
	    if(s[i]=='a')
	        cnt++;
	    if(s[i]=='b'&&cnt>0){
	        ans-=2;cnt--;
	    }
	}

	cout<<ans<<endl;
	
	return 0;
}
