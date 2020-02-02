#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
	    cin>>a[i];
	    
	}
	ll b[10][n+1]={0};
	memset(b,0,sizeof(b));
	for(ll i=1;i<=10;i++){
	    for(ll j=1;j<=n;j++){
	        if(j-i-1<0){
	            b[i-1][j]=a[j-1];
	        }
	        else{
	            b[i-1][j]=b[i-1][j-i]+a[j-1];
	        }
	    }
	}
	ll q;
	cin>>q;
	for(ll i=0;i<q;i++){
	    ll l,r,d;
	    cin >> l >> r >> d;
	    ll kk=(r-l)/d;
	    kk*=d;
	    cout << b[d-1][r]-b[d-1][max(0LL,r-kk-d)]<< endl;
	}
	return 0;
}

