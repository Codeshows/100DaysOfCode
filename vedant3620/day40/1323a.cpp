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
    	ll a[n];
    	for(ll i=0;i<n;i++) cin>>a[i];
    	if(n==1 && a[0]%2!=0) cout<<-1<<endl;
    	else if(a[0]%2==0){
    		cout<<1<<endl;
    		cout<<1<<endl;
		}
		else if((a[0]+a[1])%2==0){
			cout<<2<<endl;
			cout<<"1 2"<<endl;
		}
		else{
			cout<<1<<endl;
			cout<<2<<endl;
		}
	}
	return 0;
}
