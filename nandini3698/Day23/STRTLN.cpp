#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

ll com(ll n){
    return (n*(n-1))/2;
}

int main() {
	test{
	    ll n,c=0;
	    cin>>n;
	    vector<ll>a(n);
	    vector<ll>b(n);
	    unordered_map<ll,ll>m1;
	    unordered_map<ll,ll>m2;
	    for(ll i=0;i<n;i++){
	        cin>>a[i]>>b[i];
    	    m1[a[i]]++;
    	    m2[b[i]]++;
	    }
	    ll res=com(n);
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	       
	    for(ll i=0;i<n;i++){
	        if(m1[a[i]]>1){
	            res=res-com(m1[a[i]]);
	            i+=(m1[a[i]]-1);
	            m1[a[i]]=0;
	        }
	    }
	    for(ll i=0;i<n;i++){
	        if(m2[b[i]]>1){
	            res=res-com(m2[b[i]]);
	            i+=(m2[b[i]]-1);
	            m2[b[i]]=0;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
