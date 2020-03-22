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
		ll n;
		cin>>n;
		if(n==1){
			cout<<"-1\n";
		}
		else{
			for(ll i=0;i<n-1;i++)cout<<5;
			cout<<4<<endl;
		}
	}
	return 0;
}
