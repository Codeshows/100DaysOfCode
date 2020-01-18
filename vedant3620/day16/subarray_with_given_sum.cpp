#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main()
 {
    test(){
        ll n,s;
        cin>>n>>s;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll sum=0,z=0,flag=1;
        for(ll i=0;i<=n;i++){
            // cout<<sum<<" ";
            if(sum==s){
                cout<<i+1-z<<" "<<i<<endl;
                flag=0;
                break;
            }
            if(sum<s && i!=n){
                sum+=a[i];
                z++;
            }
            while(sum>s && i!=n){
                sum-=a[i-z+1];
                z--;
            }
        }
        if(flag==1){
            cout<<-1<<endl;
        }
    }
	return 0;
}
