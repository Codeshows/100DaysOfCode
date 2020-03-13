#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
    test{
        ll n,a,b;
        cin>>n>>a>>b;
        ll x=(b*n)/(a+b);
        ll y=(a*n)/(a+b);
        if(x+y!=n){
            ll p1=a*x*x+b*(y+1)*(y+1);
            ll p2=a*(x+1)*(x+1)+b*y*y;
            if(p1<p2)
                cout<<p1<<"\n";
            else
                cout<<p2<<"\n";
        }
        else
            cout<<(a*x*x+b*y*y)<<"\n";
    }
    return 0;
}