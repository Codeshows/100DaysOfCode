#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long t,a,b,n;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>n;
	    if(n&1)
	    {
	        cout<<max(2*a,b)/min(2*a,b)<<endl;
	    }
	    else
	    {
	        cout<<max(a,b)/min(a,b)<<endl;
	    }
	}
	return 0;
}

