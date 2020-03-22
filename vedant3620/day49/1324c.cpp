#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
    test(){
    	string s;
    	cin>>s;
    	ll ans=0;
    	ll l=0;
    	for(ll i=0;i<s.length();i++){
    		if(s[i]=='L')l++;
    		else{
    			ans=max(l,ans);
    			l=0;
			}
		}
		ans=max(l,ans);
		cout<<ans+1<<endl;
	}
	return 0;
}
