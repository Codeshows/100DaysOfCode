#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mp map<long, long>
#define um unordered_map<long, long>
#define pll pair<long, long>
#define st set<long> 
#define us unordered_set<long>
#define vt vector<long>
#define vp vector<pll>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)

int main() {
	// your code goes here
	long n,q,l,r,M;
	cin>>n>>q;
	int arr[n+1]={0}, arr1[n+1]={0}, arr2[n+1]={0};
	while(q--)
	{
	    cin>>l>>r;
	    l--;
	    r--;
	    arr[l]++;
	    arr1[r+1]+=(r-l+1);
	    arr2[r+1]++;
	}
	fl(i, 1, n)
	{
	    arr[i]+=arr[i-1];
	    arr1[i]+=arr1[i-1];
	    arr2[i]+=arr2[i-1];
	}
	fl(i, 0, n)
	arr[i]-=arr2[i];
	fl(i, 0, n)
	arr[i]+=arr[i-1];
	cin>>M;
	while(M--)
	{
	    cin>>l;
	    cout<<arr[l-1]-arr1[l-1]<<endl;
	}
	return 0;
}
