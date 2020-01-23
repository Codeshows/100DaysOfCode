// Geeksforgeeks/Must do questions/Array Problem-Merge two sorted array :-

/*Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m. The task is to merge the two sorted arrays 
into one sorted array (in non-decreasing order).

Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space.  We need to modify existing arrays as following.
Input:
First line contains an integer T, denoting the number of test cases. First line of each test case contains two space separated 
integers X and Y, denoting the size of the two sorted arrays. Second line of each test case contains X space separated integers, 
denoting the first sorted array P. Third line of each test case contains Y space separated integers, denoting the second array Q.

Output:
For each test case, print (X + Y) space separated integer representing the merged array.*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll m,n;
	    cin>>m>>n;
	    ll a[m],b[n];
	    for(ll i=0;i<m;i++)
	        cin>>a[i];
	    for(ll i=0;i<n;i++)
	        cin>>b[i];
	    ll i=0,j=0;
	    while(i<m && j<n){
	        if(a[i]<b[j]){
	            cout<<a[i]<<" ";
	            i++;
	        }
	        else{
	            cout<<b[j]<<" ";
	            j++;
	        }
	    }
	    while(i<m){
	        cout<<a[i]<<" ";
	        i++;
	    }
	    while(j<n){
	        cout<<b[j]<<" ";
	        j++;
	    }
	    cout<<endl;
	}
	return 0;
}