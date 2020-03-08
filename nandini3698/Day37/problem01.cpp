#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,g,c=0;
    cin>>n>>m>>g;
    int mx=0,a,b;
    cin>>a;
    for(int i=1;i<n;i++){
        cin>>b;
        if(b-a>mx)
            mx=b-a;
        a=b;
    }

    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(x<=mx)
            c++;
    }
    cout<<c;
    return 0;
    
}