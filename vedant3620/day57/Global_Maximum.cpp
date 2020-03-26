#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll m;
    cin>>m;
    ll s=0,e=1e9;
    ll ans=0;
    while(s<=e){
        ll mid=(s+e)/2;
        ll cnt=1,sub=a[0],sum=0;
        ll i=1;
        while(i<n){
            sum=a[i]-sub;
            if(sum>=mid){
                sub=a[i];
                sum=0;
                ++cnt;
            }
            i++;
        }
        if(cnt>=m){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
        
    }
    cout<<ans<<endl;
	return 0;
}
