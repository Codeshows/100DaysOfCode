#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
	ll x;
	cin>>x;
	ll ans=0;
	ll y=x/500;
	ans+=(y*1000);
	x-=(500*y);
	y=x/5;
	ans+=(y*5);
	cout<<ans;
	return 0;
}
