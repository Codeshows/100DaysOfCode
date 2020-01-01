#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n,k;
        cin>>n>>k;
        ll minPoss = n/k;
        ll kby2 = k/2;
        ll ans = min(minPoss * k + (kby2), n);
        cout<<ans<<'\n';
    }
	return 0;
}
