#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	    cout<<s<<" ";
	    bool val;
	    val=next_permutation(s.begin(),s.end());
	    while(val){
	        cout<<s<<" ";
	        val=next_permutation(s.begin(),s.end());
	    }
	    cout<<endl;
	}
	return 0;
}