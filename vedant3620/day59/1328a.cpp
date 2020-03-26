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
		ll a,b;
		cin>>a>>b;
		ll y=ceil(a/(double)b);
		cout<<abs(a-(y*b))<<endl;
	}
	return 0;
}
