#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n;
	    cin>>n;
	    ll a=0,b=0,c=0,t;
	    for(ll i=0;i<n;i++){
	        cin>>t;
	        if(t==0)
	            a++;
	        else if(t==1)
	            b++;
	        else
	            c++;
	    }
	    while(a>0){
	        cout<<"0"<<" ";
	        a--;
	    }
	    while(b>0){
	        cout<<"1"<<" ";
	        b--;
	    }
	    while(c>0){
	        cout<<"2"<<" ";
	        c--;
	    }
	    cout<<endl;
	}
	return 0;
}