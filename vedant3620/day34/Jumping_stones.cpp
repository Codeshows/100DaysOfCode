#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007


int main() {
    ll n,k;
    cin>>n>>k;
    ll a[n+1]={0};
    a[0]=0;
    a[1]=1;
    for(ll i=1;i<=n;i++){
        for(ll j=max(i-k,0LL);j<i;j++){
            
            a[i]=(a[i]+a[j])%MOD;
        }
    }
    cout<<a[n]%MOD<<endl;
	return 0;
}
