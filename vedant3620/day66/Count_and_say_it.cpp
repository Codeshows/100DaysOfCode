#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
    ll n;
    cin>>n;
    string s="1";
    for(ll i=0;i<n-1;i++){
        string t="";
        ll l=s.length();
        for(ll i=0;i<l;i++){
            ll c=1;
            while(s[i]==s[i+1]&&i<l-1){
                c++;
                i++;
            }
            t=t+to_string(c);
            t.push_back(s[i]);
        }
        s=t;

    }
    cout<<s<<endl;
	return 0;
}
