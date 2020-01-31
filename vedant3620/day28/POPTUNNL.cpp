#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD im0007
#define im 100000000
int main() {
	test(){
	    
	    ll n,k;
	    cin>>n>>k;
        ll a[n][n];
        for(ll i=0;i<n;i++){
            string s;
            cin>>s;
            for(ll j=0;j<n;j++) a[i][j]=im;
            for(ll j=i+1;j<n && j<=k+i;j++){
   		    if(s[j]=='1'){
   			    a[i][j]=1;
		   }
		   
	   }
	        for(ll j=i-1;j>=0 && (i-j)<=k;j--){
		        if(s[j]=='1'){
			        a[i][j]=1;
		    }   
		     
	    }
        }
        ll s=0,d=n-1,i,mdn,x,flag=1;
        ll di[n],fn[n],t[n];
        for(i=0;i<n;i++){
            di[i]=im;
            fn[i]=im;
            t[i]=0;
        }
        di[s]=0;
        fn[s]=s;
        mdn=s;
        while(mdn!=d){
            //calculate new distances
            for(i=0;i<n;i++){
                x=di[mdn]+a[mdn][i];
                if(x<di[i]){
                    di[i]=x;
                    fn[i]=mdn;
                    t[i]=0;
                }
            }
            t[mdn]=1;
            //find new mdn with non tick
            i=0;
            while(i<n&&t[i]==1){
                i++;
            }
            if(i==n){
                flag=0;
                break;
            }
            //first non tick node
            mdn=i;
            for(i=mdn+1;i<n;i++){
                if(t[i]==0&&di[i]<di[mdn])
                    mdn=i;
            }
            
        }
        
        if(di[d]<im){
            cout<<di[d]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
	}
	return 0;
}
