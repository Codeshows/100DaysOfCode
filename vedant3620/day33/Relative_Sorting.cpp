#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
int main()
 {
    test(){
        int n,m;
        cin>>n>>m;
        int k;
        map <int,int> mp;
        for(int i=0;i<n;i++){
            cin>>k;
            mp[k]++;
        }
        for(int i=0;i<m;i++){
            cin>>k;
            if(mp[k]!=0){
                while(mp[k]--){
                    cout<<k<<" ";
                }
                mp[k]=-1;
            }
        }
        for(map<int,int> :: iterator it=mp.begin();it!=mp.end();++it){
            if((*it).second!=-1){
                int j=(*it).second;
                while(j--){
                    cout<<(*it).first<<" ";
                }
                
            }
        }
        cout<<endl;
        
    }
	return 0;
}