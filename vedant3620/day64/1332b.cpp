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
 
int main(){
	fastIo
	test{
		ll n;
		cin>>n;
		ll a[11]={2,3,5,7,11,13,17,19,23,29,31};
		map<int,int>m;
		for(ll i=0;i<11;i++)
			m.insert(mp(a[i],0));
		ll b[n];
		for(ll i=0;i<n;i++){
			cin>>b[i];
			for(ll j=0;j<11;j++){
				if(b[i]%a[j]==0){
					m[a[j]]=1;
					break;
				}
			}			
		}
		ll i=1;
		for(ll j=0;j<11;j++)
			if(m[a[j]]){
				m[a[j]]=i;
				i++;
			}
		cout<<(i-1)<<end;
		for(ll i=0;i<n;i++){
			for(ll j=0;j<11;j++){
				if(b[i]%a[j]==0){
					cout<<m[a[j]]<<" ";
					break;
				}
			}
		}
		cout<<end;
	}
    return 0;
} 
