// Geeksforgeeks\Must_do_questions\Greedy Problem - N meetings in one room
/*There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] is start time 
of meeting i and F[i] is finish time of meeting i.

What is the maximum number of meetings that can be accommodated in the meeting room?

Input:
The first line of input consists number of the test cases. The description of T test cases is as follows:
The first line consists of the size of the array, second line has the array containing the starting time of all the 
meetings each separated by a space, i.e., S [ i ]. And the third line has the array containing the finishing time 
of all the meetings each separated by a space, i.e., F [ i ].

Output:
In each separate line print the order in which the meetings take place separated by a space.

Constraints:
1 ≤ T ≤ 70
1 ≤ N ≤ 100
1 ≤ S[ i ], F[ i ] ≤ 100000*/

#include <bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)

struct meeting{
    int st,fn,id;
};

bool sortmeeting(meeting m1,meeting m2){
    return (m1.fn<m2.fn);
}

int main() {
	test{
	    int n;
	    cin>>n;
	    struct meeting a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i].st;
	        a[i].id=i+1;
	    }
	    for(int i=0;i<n;i++)
	        cin>>a[i].fn;
	    
	    sort(a,a+n,sortmeeting);
	    
	    cout<<a[0].id<<" ";
	    int i=0;
	    for(int j=1;j<n;j++){
	        if(a[j].st>a[i].fn){
	            cout<<a[j].id<<" ";
	            i=j;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}