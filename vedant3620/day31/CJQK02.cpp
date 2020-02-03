#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007

int main() {
	ll n,x,y;
	cin>>n>>x>>y;
        cout<<max(0LL,((n-2)*y)-((n-2)*x)+1);
	return 0;
}
