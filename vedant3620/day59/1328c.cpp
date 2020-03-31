#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

ll twoSetBitNums(ll n) 
{ 
    ll x = 1; 
    while (n > 0) 
    { 
        ll y = 0; 
        while (y < x) 
        { 
            n--; 
            if (n == 0) 
                return  ((1 << x) + (1 << y)); 
            y++; 
        } 
        x++; 
    } 
}
int main() 
{ 
    test(){
    	ll l;
    	string s,a,b;
		ll flag=0;
    	cin>>l>>s;
    	for(ll i=0;i<l;i++){
    		if(s[i]=='2'){
    			if(flag==0){
					a.push_back('1');
					b.push_back('1');
					
				}
				else{
					a.push_back('0');
					b.push_back('2');
				}
			}
			else if(s[i]=='1'){
				if(flag==0){
					a.push_back('1');
					b.push_back('0');
					flag=1;
					
				}
				else{
					a.push_back('0');
					b.push_back('1');
				}
			}
			else {
				a.push_back('0');
				b.push_back('0');
			}
		}
		cout<<a<<endl<<b<<endl;
	}
  
    
    return 0; 
} 
