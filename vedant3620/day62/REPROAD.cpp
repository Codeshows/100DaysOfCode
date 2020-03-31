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
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];
		ll back=0,front=0;
		ll ans=0;
		while(back<n){
			if(a[back]==1){
				back++;
				ans=max(ans,back-front);
			}
			else{
				k--;
				if(k<0){
					while(k<0){
						if(a[front]==0){
							k++;
						}
						front++;
					}
				}
				back++;
				ans=max(ans,back-front);
				
			}
		}
		cout<<ans<<endl;
		
	}
	return 0;
}
