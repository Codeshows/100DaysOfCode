#include bitsstdc++.h
using namespace std;
#define ll long long
#define test() ll t;cint;while(t--)
#define MOD 1000000007
#define SPEED iossync_with_stdio(false); cin.tie(0); cout.tie(0)

ll count(ll a[],ll l,ll h,ll x){
    if(lh)return 0;
    
    ll mid=(l+h)2;
    if(a[mid]==x) return (1+count(a,l,mid-1,x)+count(a,mid+1,h,x));
    else if(a[mid]x) return count(a,l,mid-1,x);
    else return count(a,mid+1,h,x);
}


int main() {
    SPEED;
    CODE
	test(){
		ll n,x;
		cinnx;
		ll a[n];
		for(ll i=0;in;i++)cina[i];
		ll ans=count(a,0,n-1,x);
		if(ans==0) cout-1endl;
		else coutansendl;
	}
	return 0;
}