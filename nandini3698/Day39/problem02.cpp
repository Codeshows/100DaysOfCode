#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
    test{
        ll l,r,s;
        cin>>l>>r>>s;
        ll L,R;
        R=r/s;
        if(l%s==0)
            L=l/s;
        else
            L=(l/s)+1;
        if(L*s<=r && L*s>=l && R*s<=r && R*s>=l)
            cout<<(L)<<" "<<(R)<<"\n";
        else
            cout<<"-1"<<" "<<"-1"<<"\n";
    }
}