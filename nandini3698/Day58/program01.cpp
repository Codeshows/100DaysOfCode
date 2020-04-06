#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
    ll n;cin>>n;
    //s1="1",s2="11",s3="21",s4="1211";
    if(n==1)
        cout<<"1"<<"\n";
    else if(n==2)
        cout<<"11"<<"\n";
    else{
        string s="11";
        for(ll i=3;i<=n;i++){
            s+='$';
            ll c=1,l=s.length();
            string t="";
            for(ll j=1;j<l;j++){
                if(s[j]!=s[j-1]){
                    t+=c+'0';
                    t+=s[j-1];
                    c=1;
                }
                else
                    c++;             
            }
            s=t;
        }
        cout<<s<<"\n";
    }
    return 0;
}