/*For her next karate demonstration, Ada will break some bricks.

Ada stacked three bricks on top of each other. Initially, their widths (from top to bottom) are W1,W2,W3.

Ada's strength is S. Whenever she hits a stack of bricks, consider the largest k≥0 such that the sum of widths of the topmost k bricks does not exceed S; the topmost k bricks break and are removed from the stack. Before each hit, Ada may also decide to reverse the current stack of bricks, with no cost.

Find the minimum number of hits Ada needs in order to break all bricks if she performs the reversals optimally. You are not required to minimise the number of reversals.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains four space-separated integers S, W1, W2 and W3.
Output
For each test case, print a single line containing one integer ― the minimum required number of hits.

Constraints
1≤T≤64
1≤S≤8
1≤Wi≤2 for each valid i
it is guaranteed that Ada can break all bricks
Subtasks
Subtask #1 (50 points): W1=W2=W3
Subtask #2 (50 points): original constraints

Example Input
3
3 1 2 2
2 1 1 1
3 2 2 1
Example Output
2
2
2
*/
#include <iostream>
using namespace std;

int main() {
    int t,w1,w2,w3,s,i,j;
    cin>>t;
    while(t--)
    {
        cin>>s>>w1>>w2>>w3;
        if(w1+w2+w3<=s)
        cout<<"1\n";
        else if(w1+w2<=s||w2+w3<=s)
        cout<<"2\n";
        else cout<<"3\n";
    }
	// your code goes here
	return 0;
}
