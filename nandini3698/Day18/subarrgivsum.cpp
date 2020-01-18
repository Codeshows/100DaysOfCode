// Geeksforgeeks\Must_do_questions\Array Problem Subarray with given sum :-

/*Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case 
consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second 
line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the 
left if sum equals to subarray, else print -1.*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    ll n,sum;
	    cin>>n>>sum;
	    vector<ll>v(n);
	    for(ll i=0;i<n;i++)
	        cin>>v[i];
	    
	    ll s=0,st=0,end=0,c=0;
	    for(ll i=0;i<n;i++){
	        end=i;
	        s+=v[i];
	        while(s>sum){
	            s-=v[st];
	            st++;
	        }
	        if(s==sum){
	            c++;
	            break;
	        }
	    }
	    if(c==0)
	        cout<<"-1"<<endl;
	    else
	        cout<<(st+1)<<" "<<(end+1)<<endl;
	}
	return 0;
}