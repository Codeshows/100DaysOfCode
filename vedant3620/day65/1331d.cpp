#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
 
int main() {
    SPEED;
    //CODE
	string s;
	cin>>s;
	cout<<((s[s.length()-1]-'0')%2)<<endl;
	return 0;
}