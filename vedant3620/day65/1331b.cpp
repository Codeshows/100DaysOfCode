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
	ll i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)break;		
	}
	cout<<i<<(n/i)<<endl;
	return 0;
}