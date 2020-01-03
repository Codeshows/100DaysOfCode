#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin>>s;
    ll t=0;
    for(ll i=0;i<s.length()-1;i++){
        if(s[i]=='A' && s[i+1]=='B'){
            for(i=i+2;i<s.length()-1;i++){
                if(s[i]=='B' && s[i+1]=='A'){
                    t=1;
                    i=s.length();
                }
            }
        }
    }
    if(t==1){
        cout<<"YES";
        return 0;
    }
    for(ll i=0;i<s.length()-1;i++){
        if(s[i]=='B' && s[i+1]=='A'){
            for(i=i+2;i<s.length()-1;i++){
                if(s[i]=='A' && s[i+1]=='B'){
                    t=1;
                    i=s.length();
                }
            }
        }
    }
    if(t==1){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}
