#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main()
 {
    test(){
        ll a[3]={0,0,0};
        ll n;
        cin>>n;
        ll x;
        for(ll i=0;i<n;i++){
            cin>>x;
            a[x]++;
        }
        while(a[0]--){
            cout<<0<<" ";
        }
        while(a[1]--){
            cout<<1<<" ";
        }
        while(a[2]--){
            cout<<2<<" ";
        }
        cout<<endl;
    }
	return 0;
}