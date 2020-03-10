#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
    test{
        ll n;
        cin>>n;
        if(n<21)
            cout<<"The streak lives still in our heart!"<<endl;
        else if(n%21){
            ll c=0;
            string s=to_string(n);
            for(ll i=0;i<s.size()-1;i++)
                if(s[i]=='2' && s[i+1]=='1'){
                    c++;
                    cout<<"The streak is broken!"<<endl;
                    break;
                }
            if(!c)
                cout<<"The streak lives still in our heart!"<<endl;
        }
        else
            cout<<"The streak is broken!"<<endl;
    }
}