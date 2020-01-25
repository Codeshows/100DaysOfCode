// Geeksforgeeks\Must_do_questions\Array Problem Kadanes Algorithm :-

/*Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. 
The first line of each test case contains a single integer N denoting the size of array. The second line contains N 
space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print the maximum sum of the contiguous sub-array in a separate line for each test case.*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    ll lsum=a[0],gsum=a[0];
	    for(ll i=1;i<n;i++){
	        lsum=max(a[i],lsum+a[i]);
	        gsum=max(gsum,lsum);
	    }
	    cout<<gsum<<endl;
	}
	return 0;
}