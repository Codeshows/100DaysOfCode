#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main()
 {
    test(){
        ll n;
        cin>>n;
        ll s=(n*(n+1))/2;
        for(ll i=0;i<n-1;i++){
            ll x;
            cin>>x;
            s-=x;
        }
        cout<<s<<endl;
    }
	return 0;
}