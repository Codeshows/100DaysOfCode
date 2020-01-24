// Geeksforgeeks/Must do questions/Array Problem-Missing number :-

/*Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array). 
The subsequent line contains N-1 array elements.

Output:
Print the missing number in array.*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n,sum=0;
	    cin>>n;
	    ll a[n-1];
	    for(ll i=0;i<n-1;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    ll res=(n*(n+1))/2-sum;
	    cout<<res<<endl;
	}
	return 0;
}