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
		ll n,x;
		cin>>n>>x;
		ll a[501]={0};
		ll t;
		for(ll i=0;i<n;i++){
			cin>>t;
			a[t]++;
		}
		ll v=1;
		for(;v<=500;v++){
			if(a[v]==0&&x==0)break;
			if(a[v]==0){
				x--;
			}
		}
		cout<<v-1<<endl;
	}
	return 0;
}
