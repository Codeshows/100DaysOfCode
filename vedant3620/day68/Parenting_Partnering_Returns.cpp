#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct s{
	ll index;
	ll start;
	ll end;
} data;
bool comp(data a,data b){
	if(a.start<b.start)return true;
	else if(a.start==b.start&&a.end<b.end)return true;
	else return false;
}
int main(){
    ll T;
    cin>>T;
    for(ll t=1;t<=T;t++){
        ll n;
        cin>>n;
        data a[n];
        for(ll i=0;i<n;i++){
        	a[i].index=i;
        	cin>>a[i].start;
        	cin>>a[i].end;
		}
		sort(a,a+n,comp);
		string s(n,'J');
		s[0]='J';
		ll flag=1;
		ll jfree=a[0].end;
		ll cfree=0;
		for(ll i=1;i<n;i++){
			if(jfree>a[i].start&&cfree>a[i].start){
				flag=0;
				break;
			}
			if(jfree>a[i].start){
				s[a[i].index]='C';
				cfree=a[i].end;
			}
			else{
				s[a[i].index]='J';
				jfree=a[i].end;
			}
			
			
		}
		if(flag==0){
			cout<<"Case #"<<t<<": "<<"IMPOSSIBLE"<<endl;
		}
		else{
			cout<<"Case #"<<t<<": "<<s<<endl;
		}
//		cout<<"Case #"<<t<<": "<<x<<endl;
	}   
}