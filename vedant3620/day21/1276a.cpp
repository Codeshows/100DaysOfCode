#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main(){
	test(){
		string s;
		cin>>s;
		ll n=s.length();
		ll ans=0;
		vector <ll> v;
		for(ll i=0;i<n-1;i++){
			if((i<n-4)&&(s[i]=='t'&&s[i+1]=='w'&&s[i+2]=='o'&&s[i+3]=='n'&&s[i+4]=='e')){
				v.push_back(i+3);
				ans++;
				i+=3;
			}
			else if(s[i]=='o'&&s[i+1]=='n'&&s[i+2]=='e'){
				v.push_back(i+2);
				ans++;
			}
			else if(s[i]=='t'&&s[i+1]=='w'&&s[i+2]=='o'){
				v.push_back(i+2);
				ans++;
			}
		}
		cout<<ans<<endl;
		for(ll i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}
