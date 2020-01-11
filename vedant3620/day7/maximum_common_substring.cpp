#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main()
 {
    test(){
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        int a[n+1][m+1]={0};
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                a[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    a[i][j]=a[i-1][j-1]+1;
                    
                }
                else{
                    a[i][j]=0;
                }
            }
        }
        int ans=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                ans=max(ans,a[i][j]);
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}