#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
    test{
        ll n,k,c=0; 
        cin>>n>>k;
        for(ll i=0;i<n;i++){
            char a[n];
            for(ll j=0;j<n;j++)
                cin>>a[j];
            for(ll j=0;j<n;j++){
                if(a[j]=='T' && j>0)
                    for(ll p=max(0ll,j-k);p<j;p++)
                        if(a[p]=='P'){
                            a[j]='A';
                            a[p]='B';
                            c++;
                            break;
                        }
                
                if(a[j]=='T' && j<n-1)
                    for(ll p=j+1;p<=min(j+k,n-1);p++)
                        if(a[p]=='P'){
                            a[j]='A';
                            a[p]='B';
                            c++;
                            break;
                        }
            }
        }

        cout<<c<<"\n";
    }
    return 0;
}