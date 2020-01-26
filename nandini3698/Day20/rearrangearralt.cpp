// Geeksforgeeks/Must do questions/Array Problem - Rearrange Array Alternately :-

/*Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be 
max value, second should be min value, third should be second max, fourth should be second min and so on...

Note: O(1) extra space is allowed. Also, try to modify the input array as required.

Input:
First line of input conatins number of test cases T. First line of test case contain an integer denoting the array size N and second 
line of test case contain N space separated integers denoting the array elements.

Output:
Output the modified array with alternated elements.*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
    test{
    	ll n;
    	cin>>n;
    	ll a[n];
    	for(ll i=1;i<n;i+=2)
    	    cin>>a[i];
    	ll p=n-1;
    	if(n%2==0)
    	    p=n-2;
    	for(ll i=p;i>=0;i-=2)
    	    cin>>a[i];
    	for(ll i=0;i<n;i++)
    	    cout<<a[i]<<" ";
    	cout<<endl;
    }
	return 0;
}