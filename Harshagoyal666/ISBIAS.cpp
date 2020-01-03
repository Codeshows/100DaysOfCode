/*Chef Aditi keeps changing the flavours of her dishes and she wants to analyse feedback from her customers in order to improve her performance. The customers visiting Aditi's restaurant can rate the food online and Aditi knows an aggregated rating for each day. As she is busy cooking, you should perform the data analysis.

You are given a sequence A1,A2,…,AN of distinct integers denoting the customers' feedback during N days. You should process Q queries. In each query, you are given two integers L and R. Consider any contiguous subsequence Ap,Ap+1,…,Aq, where L≤p<q≤R; let's call it a maximal increasing subsequence if the following conditions hold:

Ap<Ap+1…<Aq
if p>L, then Ap<Ap−1
if q<R, then Aq>Aq+1
Similarly, let's define a maximal decreasing subsequence. You should find out if the number of maximal increasing subsequences is equal to the number of maximal decreasing subsequences (with L≤p<q≤R).

For example, if A=(10,20,30,5), we can see that the only maximal increasing subsequence of this sequence (for L=1 and R=N) is (10,20,30), since (10,20) and (20,30) do not satisfy the third condition, and there is only one maximal decreasing subsequence (30,5).

Input
The first line of the input contains two space-separated integers N and Q.
The second line contains N space-separated integers A1,A2,…,AN.
Q lines follow. Each of these lines contains two space-separated integers L and R describing a query.
Output
For each query, print a single line containing the string "YES" if the number of maximal increasing contiguous subsequences is equal to the number of maximal decreasing contiguous subsequences or "NO" otherwise (without quotes).*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,i,j,l,r,q,k;
    cin>>n>>q;
    long long int a[n],inc[n]={0},dec[n]={0},decans[n]={0},incans[n]={0};
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=1;i<n-1;i++)
    {
        if(a[i+1]<a[i]&&a[i]>a[i-1])
        {inc[i]=1;
        inc[i+1]=0;i++;}

    }
    if(a[n-2]<a[n-1])
    inc[n-1]=1;
    for(i=1;i<n-1;i++)
    {
        if(a[i+1]>a[i]&&a[i]<a[i-1])
        {
            dec[i]=1;
            dec[i+1]=0;i++;
        }
    }
    if(a[n-2]>a[n-1])
    dec[n-1]=1;
    for(i=1;i<n;i++)
    {
        decans[i]=decans[i-1]+dec[i];
        incans[i]=incans[i-1]+inc[i];
    }
    /*for(i=0;i<n;i++)
    cout<<inc[i]<<" ";
    cout<<"\n";
    for(i=0;i<n;i++)
    cout<<dec[i]<<" ";
    cout<<"\n";
    for(i=0;i<n;i++)
    cout<<incans[i]<<" ";
    cout<<"\n";
    for(i=0;i<n;i++)
    cout<<decans[i]<<" ";
    cout<<"\n";*/
    while(q--)
    {j=0;k=0;
        cin>>l>>r;
        /*for(i=l;i<r;i++)
        {
            j=j+inc[i];k=k+dec[i];
        }*/
        j=incans[r-1]-incans[l-1];k=decans[r-1]-decans[l-1];
        if(inc[r-1]==0&&inc[r-2]==0&&a[r-1]>a[r-2])
        j++;

        if(dec[r-1]==0&&dec[r-2]==0&&a[r-1]<a[r-2])
        k++;

        if(j==k)
        cout<<"YES\n";
        else cout<<"NO\n";

    }
	// your code goes here
	return 0;
}
