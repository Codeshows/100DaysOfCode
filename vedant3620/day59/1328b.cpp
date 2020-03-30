#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() 
{ 	SPEED;
    test(){
	    ll n,k;
	    cin>>n>>k;
	    ll x = 1LL,y=0LL; 
	    while (k > 0) 
	    {	y=k; 
	        k-=x;
	        x++;
	    } 
	    for(ll i=0;i<n;i++){
	        if(i==(n-x)||i==(n-y))cout<<'b';
	        else cout<<'a';
		}
		cout<<endl;
			
}
  
    
    return 0; 
} 
