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
		ll ans=0;
		ll x;
		cin>>x;
		while(x){
		    x=x&(x<<1);
		    ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}