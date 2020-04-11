// Divide them all
// https://www.codechef.com/GHC32020/problems/MOON

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n,m,x,y;
	    cin>>n>>m>>x>>y;
	    ll t=(n*x+m*y);
	    if(t%2==0){
	        ll c=0;
	        t=t/2;

            if(y==0 && n%2==0)
	           c++;
	        else if(x==0 && m%2==0)
	            c++;
	        else if(n==0 && m%2==0)
	            c++;
	        else if(m==0 && n%2==0)
	            c++;
	        else if(y!=0 && x!=0 && n!=0 && m!=0){
	        for(ll a=0;a<=n;a++){
	            ll k=t-a*x;
	            if(k%y==0 && k>=0 && k/y<=m){
	                c++;
	                break;
	            }
	        }
	        }
	        if(c)
	            cout<<"YES"<<"\n";
	        else
	            cout<<"NO"<<"\n";
	        
	    }
	    else
	        cout<<"NO"<<"\n";
	}
	return 0;
}