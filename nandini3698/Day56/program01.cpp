// Exercising Walk
// https://codeforces.com/contest/1332/problem/A

#include<bits/stdc++.h>
#define ll long long
#define li long int
#define fastIo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define end "\n"
#define test ll t;cin>>t;while(t--)
using namespace std;
 
ll power(ll a,ll b,ll m){
	ll res=1;
	while(b>0){
		if(b&1)
			res=(res*a)%m;
		b=b>>1;
		a=(a*a)%m;
	}
	return res%m;
}
 
ll modInv(ll n,ll m){
	return power(n,m-2,m);
}
 
ll gcd(ll a,ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}
 
ll fac(ll n){
	if(n==0 || n==1) return 1;
	return n*fac(n-1);
}
 
int setbits(ll n){
	int c=0;
	while(n){
		n=n&(n-1);
		c++;
	}
	return c;
}
 
ll combination(ll n, ll r, ll p){ 
    if (r==0) 
    return 1; 
    ll fac[n+1]; 
    fac[0] = 1; 
    for (ll i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
    return (fac[n]*modInv(fac[r],p)%p*modInv(fac[n-r],p)%p)%p; 
}
 
int main(){
	fastIo
	test{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll x,y,x1,y1,x2,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		ll p=a-b;
		ll q=c-d;
		ll X=x-p;
		ll Y=y-q;
		if((x==x1 && x==x2 && a && b)||( y==y1 && y==y2 && c && d))
			cout<<"No"<<endl;
		else if((X<=x2 && X>=x1)&&(Y<=y2 && Y>=y1))
			cout<<"Yes"<<end;
		else
			cout<<"No"<<end;
	}
    return 0;
} 