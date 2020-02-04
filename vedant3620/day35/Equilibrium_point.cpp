#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main()
 {  test(){
        ll n,i;
        cin>>n;
        ll a[n],l[n+1],r[n+1],flag=1;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        l[0]=0,r[n]=0;
        for(i=1;i<=n;i++){
            l[i]=l[i-1]+a[i-1];
        }
        for(i=n-1;i>=0;i--){
            r[i]=r[i+1]+a[i];
        }
        for(i=0;i<n;i++){
            if(l[i]==r[i+1]){
               cout<<i+1<<endl;
               flag=0;
            }
        }
        if(flag){
            cout<<-1<<endl;
        }
     
 }
	return 0;
}