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
    	ll f[5001]={0};
    	ll a[n];
    	for(ll i=0;i<n;i++) cin>>a[i];
    	f[a[0]]++;
		ll flag=0;
		for(ll i=1;i<n;i++){
    		if((f[a[i]]==1&&a[i-1]!=a[i])||f[a[i]]>=2){
				flag=1;
				break;
			}
			
			f[a[i]]++;
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
