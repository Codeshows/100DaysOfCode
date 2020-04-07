#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int r=0,c=0,x=0;
        for(int i=0;i<n;i++)x+=a[i][i];
        unordered_map <int,int> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(m.find(a[i][j])==m.end()) m.insert(make_pair(a[i][j],1));
                else{ r++;
                break;}
            }
            m.clear();
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(m.find(a[j][i])==m.end()) m.insert(make_pair(a[j][i],1));
                else{ c++;
                break;}
            }
            m.clear();
        }
        cout<<"Case #"<<t<<": "<<x<<" "<<r<<" "<<c<<endl;
    }
}