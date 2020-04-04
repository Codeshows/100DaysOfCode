#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
bool comp(string s1,string s2){
    string x=s1+s2;
    string y=s2+s1;
    if(x>y){
        return 1;
    }
    else return 0;
}

int main() {
    SPEED;
    //CODE
	test(){
		ll n;
		cin>>n;
		string s[n];
		for(ll i=0;i<n;i++)cin>>s[i];
		sort(s,s+n,comp);
		string ans;
		for(ll i=0;i<n;i++){
		    ans.append(s[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}