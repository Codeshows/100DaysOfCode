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
        ll n,a,b;
        cin>>n>>a>>b;
        ll x,y;
        x=(b*n)/(a+b);
        y=n-x;
        ll ans=(a*x*x)+(b*y*y);
        if(y>0){
            ans=min(ans,(a*(x+1)*(x+1))+(b*(y-1)*(y-1)));
        }
        cout<<ans<<endl;
        
    }
	return 0;
}
