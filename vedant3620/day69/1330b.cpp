#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
 
int main() {
    SPEED;
    //CODE
    test(){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)cin>>a[i];
		ll m=0;
		
		for(ll i=0;i<n;i++){
			m=max(m,a[i]);
		}
		
		ll l1[n];
		ll r1[n];
		for(ll i=0;i<n;i++){
		    l1[i]=0;
		    r1[i]=0;
		}
		
		vector < pair<ll,ll> >v;
		
		for(ll i=0;i<m;i++){
			l1[a[i]-1]++;
		}
		
		for(ll i=m;i<n;i++){
			r1[a[i]-1]++;
		}
		
		ll flag=1;
		for(ll i=0;i<m;i++){
			if(l1[i]==0)flag=0;
		}
		for(ll i=0;i<n-m;i++){
			if(r1[i]==0)flag=0;
		}
		if(flag==1)v.push_back(make_pair(m,n-m));
		
		
		
		ll l2[n];
		ll r2[n];
		for(ll i=0;i<n;i++){
		    l2[i]=0;
		    r2[i]=0;
		}
		
		for(ll i=0;i<n-m;i++){
			l2[a[i]-1]++;
		}
		
		for(ll i=n-m;i<n;i++){
			r2[a[i]-1]++;
		}
		
		flag=1;
		for(ll i=0;i<n-m;i++){
			if(l2[i]==0)flag=0;
		}
		
		for(ll i=0;i<m;i++){
			if(r2[i]==0)flag=0;
		}
		
		if(flag==1)v.push_back(make_pair(n-m,m));
		
		if(v.size()==2){
			if(v[0].first==v[1].first&&v[0].second==v[1].second)v.pop_back();
		}
		cout<<v.size()<<endl;
		for(ll i=0;i<v.size();i++){
			
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}
	}
	return 0;
}
