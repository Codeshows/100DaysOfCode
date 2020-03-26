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
			ll n,k;
			cin>>n>>k;
			ll z=(k-1)*(k-1);
			if(n<z){
				cout<<"NO"<<endl;
			}
			else if(((n-z)%2==1)&&(n-z)>=(2*k-1)) cout<<"YES"<<endl;
			else{
				cout<<"NO"<<endl;
			}
		}
	return 0;
}
