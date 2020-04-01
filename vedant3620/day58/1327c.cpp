#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
		ll n,m,k;
		cin>>n>>m>>k;
		ll sx[k],sy[k],fx[k],fy[k];
		for(ll i=0;i<k;i++) cin>>sx[i]>>sy[i];
		for(ll i=0;i<k;i++) cin>>fx[i]>>fy[i];
		cout<<n+m+n*m-3<<endl;
		for(ll i=0;i<m-1;i++){
			cout<<"R";
		}
		for(ll i=0;i<n-1;i++){
			cout<<"U";
		}
		for(ll i=0;i<m;i++){
			for(ll j=0;j<n-1;j++){
				if(i%2==0){
					cout<<"D";
				}
				else{
					cout<<"U";
				}
				
			}
			if(i!=m-1) cout<<"L";
		}
		cout<<endl;
		
		
	return 0;
}
