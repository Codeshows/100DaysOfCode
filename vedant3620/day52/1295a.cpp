#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
int main() {
    SPEED;
    //CODE
	test(){
		ll n;
		cin>>n;
		vector <ll> v;
		if(n%2==1){
			v.push_back(7);
			n-=3;
		}
		while(n>=2){
			v.push_back(1);
			n-=2;
		}
		for(ll i=0;i<v.size();i++){
			cout<<v[i];
			
		}
		cout<<endl;
	}
	return 0;
}
