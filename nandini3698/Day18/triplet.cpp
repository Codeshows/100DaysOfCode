// Geeksforgeeks\Must_do_questions\Array Problem Count the triplets :-

/*Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of 
two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

Output:
For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n,res=0;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    sort(a,a+n);
	    for(ll i=2;i<n;i++){
	        ll t=a[i];
	        ll st=0,end=i-1;
	        while(st<end){
	            if(a[st]+a[end]==t){
	                res++;
	                end--;st++;
	            }
	            else if(a[st]+a[end]>t)
	                end--;
	            else
	                st++;
	        }
	    }
	    if(res==0)
	        cout<<"-1"<<endl;
	    else
	        cout<<res<<endl;
	}
	return 0;
}