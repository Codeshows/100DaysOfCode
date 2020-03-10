#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007

int main() {
    SPEED;
    //CODE
    ll t;
    cin>>t;
    while(t--){
        ll d,a,m,b,x;
        cin>>d>>a>>m>>b>>x;
        x-=d;
        ll z=a*m+b;
        ll ans=x/z;
        x=x-(ans*z);
        ans=ans*(m+1);
        ans+=(ll)ceil(x/(double)a);
        cout<<ans<<endl;
    }
	return 0;
}
