// Geeksforgeeks/Must do questions/Array Problem-Inversion of array :-

/*Given an array of positive integers. The task is to find inversion count of array.

Inversion Count : For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted 
then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, the size of array. 
The second line of each test case contains N elements.

Output:
Print the inversion count of array.*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

ll merge(ll *a, ll p, ll q, ll r){
    ll c=0;
    ll n1=q-p+1;
    ll n2=r-q;
    ll lt[n1],rt[n2];
    for(ll i=0;i<n1;i++)
        lt[i]=a[p+i];
    for(ll i=0;i<n2;i++)
        rt[i]=a[q+i+1];
    ll i=0,j=0,k=p;
    while(i<n1 && j<n2){
        if(lt[i]<=rt[j]){
            a[k]=lt[i];
            i++;
        }
        else{
            a[k]=rt[j];
            j++;c+=(n1-i);
        }
        k++;
    }
    while(i<n1){
        a[k]=lt[i];
        i++;k++;
    }
    while(j<n2){
        a[k]=rt[j];
        j++;k++;
    }
    return c;
}

ll mergesort(ll *a, ll p, ll r){
    ll res=0;
    if(p<r){
        ll q=(p+r)/2;
        res+=mergesort(a,p,q);
        res+=mergesort(a,q+1,r);
        res+=merge(a,p,q,r);
    }
    return res;
}

int main() {
	test{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    ll res=mergesort(a,0,n-1);
	    cout<<res<<endl;
	}
	return 0;
}





