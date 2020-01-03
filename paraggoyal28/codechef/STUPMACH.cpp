#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long test, tokens , n;
	cin>>test;
	while(test--)
	{
	    cin >> n;
	    tokens = 0;
	    long long s[n];
	    for(long long i = 0;i < n; i++)
	    {
	        cin >> s[i];
	    }
	    long long min_current = s[0];
	    long long i;
	    for(i = 1; i < n; i++)
	    {
	        if(s[i] <= min_current)
	        {   
	            tokens += min_current;
	            min_current = s[i];
	        }         
	        else
    	    {
    	        break;
    	    }
	    }
	    tokens += min_current * (n - i +1);
	    cout << tokens << endl;
	}
	return 0;
}

