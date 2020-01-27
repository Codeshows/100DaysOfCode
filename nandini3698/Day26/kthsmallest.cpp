#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main() {
	test{
	    int n,k;
	    cin>>n;
	    int a[n];
	    int h[100001]={0};	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        h[a[i]]++;
	    }
	    cin>>k;
	    for(int i=1;i<100001;i++){
	        if(h[i]>=1)
	            k--;
	        if(k==0){
	            cout<<i<<endl;
	            break;}
	    }
	}
	return 0;
}