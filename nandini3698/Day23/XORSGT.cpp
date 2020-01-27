#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll l,r;
	    cin>>l>>r;
	    if(l%4==0 && r%4==3)
	        cout<<'0'<<endl;
	    else{
	        ll res=0;
	        ll i=l;
	        while(i%4!=0 && i<=r){
	            res=res^i;
	            i++;
	        }
	        i--;
	        ll j=r;
	        while(j%4!=3 && j>=l && j>i){
	            res=res^j;
	            j--;
	        }
	        cout<<res<<endl;
	    }
	}
	return 0;
}
