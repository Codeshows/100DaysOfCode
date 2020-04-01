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
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];
        unordered_map <ll,ll> m;
        ll flag=0,sum=0;
        m.insert(make_pair(0,1));
        for(ll i=0;i<n;i++){
            sum+=a[i];
            if(m.find(sum)==m.end()){
                m.insert(make_pair(sum,1));
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
		
	}
	return 0;
}