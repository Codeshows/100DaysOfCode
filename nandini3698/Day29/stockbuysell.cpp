#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    vector<ll>v;
	    for(ll i=0;i<n;i++){
	        if(a[i+1]>a[i] && i+1<n){
	            v.push_back(i);
	            i++;
	            while(a[i+1]>a[i] && i+1<n)
	                i++;
	            v.push_back(i);
	            //i++;
	        }
	    }
	    if(v.size()==0)
	        cout<<"No Profit";
	    else{
	    for(ll i=0;i<v.size();i++){
	        cout<<"("<<v[i]<<" "<<v[i+1]<<")"<<" ";
	        i++;
	    }
	    }
	    cout<<endl;
	}
	return 0;
}