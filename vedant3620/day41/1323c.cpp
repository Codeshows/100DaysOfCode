#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    ll l=0,z=0;
    for(ll i=0;i<n;i++){
    	if(s[i]=='(') l++;
    	else l--;
    	if(l<0) z++;
    	if(l==0&&z!=0){
    		ans+=(z+1);
    		z=0;
		}
	}
	if(l!=0)cout<<-1;
	else cout<<ans;
	return 0;
}
