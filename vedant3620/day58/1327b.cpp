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
			ll p[n]={0},d[n]={0};
			for(ll i=0;i<n;i++){
				ll s;
				cin>>s;
				ll b[s];
				for(ll j=0;j<s;j++)cin>>b[j];
				
				for(ll j=0;j<s;j++){
					if(p[b[j]-1]==0)
					{	d[i]=1;
						p[b[j]-1]=1;
						break;
					}
				}
			}
			ll flag=1;
			for(ll i=0;i<n;i++){
				if(p[i]==0){
					for(ll j=0;j<n;j++){
						if(d[j]==0){
							cout<<"IMPROVE"<<endl;
							cout<<j+1<<" "<<i+1<<endl;
							flag=0;
							i=n;
							break;
					}
				}
			}
		}
			if(flag) cout<<"OPTIMAL"<<endl;
		}
	return 0;
}
