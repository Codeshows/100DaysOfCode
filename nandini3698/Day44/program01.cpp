#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
    int n,m,mx1,mx2;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx1=max(mx1,a[i]);
    }

    cin>>m;
    int c[m];
    unordered_map<int,int>u;
    for(int i=0;i<m;i++){
        cin>>c[i];
        mx2=max(mx2,c[i]);
        u[c[i]]++;
    }

    int mx=mx2-mx1;
    vector<int>v;
    for(int i=1;i<=min(mx,100);i++){
        int k=0;
        for(int j=0;j<n;j++)
            if(!u[a[j]+i]){
                k++;break;
            }
        if(k==0)
            v.push_back(i);
    }

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    
    return 0;
        
}