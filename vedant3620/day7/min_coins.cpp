#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main()
 {
    test(){
        int n;
        cin>>n;
        int coins[]={1,2,5,10,20,50,100,200,500,2000};
        int a[10][n+1]={0};
        for(int i=0;i<=n;i++){
            a[0][i]=i;
        }
        for(ll i=1;i<10;i++){
            for(ll j=0;j<=n;j++){
                if(j>=coins[i]){
                    a[i][j]=min(a[i-1][j],1+a[i][j-coins[i]]);
                }
                else{
                    a[i][j]=a[i-1][j];
                }
            }
        }
        int i=9,j=n;
        while(i>=0 && j>0){
            if(a[i][j]==a[i-1][j]){
                i=i-1;
            }
            else{
                cout<<coins[i]<<" ";
                j-=coins[i];
            }
        }
        cout<<endl;
    }
	return 0;
}