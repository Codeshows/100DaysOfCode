#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll m,S;
    cin>>m>>S;
    ll sm[m]={0},la[m]={0};
    if(S>9*m||(S==0&&m!=1)){
        cout<<"-1 -1"<<endl;
    }
    else{
        ll s=S;
        ll i=m-1;
        while(s>9){
            sm[i]=9;
            s-=9;
            i--;
        }
        if(i==0){
            sm[i]=s;
        }
        else{
            sm[i]=s-1;
            sm[0]=1;
        }
        for(ll i=0;i<m;i++){
        cout<<sm[i];
        }
        cout<<" ";
        i=0;s=S;
        while(s>9){
            la[i]=9;
            s-=9;
            i++;
        }
        la[i]=s;

        for(ll i=0;i<m;i++){
        cout<<la[i];
        }

    }

}
