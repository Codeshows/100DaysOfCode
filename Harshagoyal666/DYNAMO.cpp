/*An N-perfect number is defined as a positive integer with at most N digits (in decimal representation without leading zeros) ― that is, X is an N-perfect number if 0<X<10N.

Chef has a friend named Dynamo, who is a legendary magician. Chef learned a new magic trick from him and now, he wants to impress his friend Cheffa by showing her the trick:

First, Cheffa should choose a positive integer N and tell it to Chef.
Then, Cheffa should choose an N-perfect number A and tell it to Chef, who should then choose a positive integer S and tell it to Cheffa.
Then, Cheffa and Chef should alternately tell each other four N-perfect numbers B, C, D and E (in this order). Cheffa chooses B and D, while Chef chooses C and E.
Cheffa will be really impressed if S turns out to be equal to A+B+C+D+E. Otherwise, Cheffa will be angry that Chef was wasting her time with a failed magic trick.
Since Chef is busy in the kitchen, you should perform the magic trick for him and impress Cheffa. The grader is acting as Cheffa and it is trying to make the magic trick fail.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,a,b,c,d,e,s,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
        n=(long long int)(pow(10,n)+0.5)-1;
        s=2*n+2+a;
        cout<<s<<"\n";
        cin>>b;
        c=n+1-b;
        cout<<c<<"\n";
        cin>>d;
        e=n+1-d;
        cout<<e<<"\n";
        cin>>i;
        if(i==1)
        continue;
    }
	// your code goes here
	return 0;
}
