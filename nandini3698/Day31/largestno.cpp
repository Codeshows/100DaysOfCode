#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

bool compare(string s1,string s2){
    return (stoi(s1+s2)>stoi(s2+s1));
}

int main() {
	test{
	    ll n;
	    cin>>n;
	    vector<string>v(n,"");
	    for(ll i=0;i<n;i++)
	        cin>>v[i];
	    sort(v.begin(),v.end(),compare);
	    for(ll i=0;i<v.size();i++)
	        cout<<v[i];
	    cout<<endl;
	}
	return 0;
}