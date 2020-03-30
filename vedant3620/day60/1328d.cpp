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
		ll flag1=1,flag2=0;
		for(ll i=0;i<n;i++){
			if(a[i]!=a[(i+1)%n]) flag1=0;
			else flag2=1;
		}
		if(flag1==1){
			cout<<1<<endl;
			for(ll i=0;i<n;i++){
				cout<<"1 ";
			}
			cout<<endl;
		}
		else{
			if(n%2==0){
				cout<<2<<endl;
				ll p=1;
				for(ll i=0;i<n;i++){
					cout<<p<<" ";
					p=3-p;
				}
				cout<<endl;
			}
			else{
				if(flag2==1){
					ll p=1;
					cout<<2<<endl;
					for(ll i=0;i<n;i++){
						p=3-p;
						cout<<p<<" ";
						if(a[i]==a[(i+1)%n]&&flag2){
							flag2=0;
							p=3-p;
						}
						
						
					}
					cout<<endl;
				}
				else{
					cout<<3<<endl;
					for(ll i=0;i<(n/2)-1;i++){
						cout<<"1 2 ";
					}
					cout<<"1 2 3"<<endl;
				}
			}
		}
	}
	return 0;
}
