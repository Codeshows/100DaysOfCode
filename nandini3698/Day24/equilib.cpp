#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
    test{
        ll n;cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        if(n==1)
            cout<<"1"<<endl;
        else{
            ll k=0;
            ll b[n],c[n];
            b[0]=a[0];
            c[n-1]=a[n-1];
            for(ll i=1;i<n;i++)
                b[i]=a[i]+b[i-1];
            for(ll i=n-2;i>=0;i--)
                c[i]=a[i]+c[i+1];
            for(ll i=1;i<n-1;i++)
                if(b[i-1]==c[i+1]){
                    cout<<i+1<<endl;
                    k++;break;
                }
            if(k==0)
                cout<<"-1"<<endl;
        }
    }
	return 0;
}