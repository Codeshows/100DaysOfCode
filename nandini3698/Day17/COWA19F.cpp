#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
    test{
        string s;
        cin>>s;
        unordered_map<char,ll>u(26);
        for(ll i=0;i<s.size();i++)
            u[s[i]]++;
        for(char i='z';i>='a';i--){
            if(u[i]>0){
                ll c=u[i];
                while(c--)
                    cout<<(i);
            }
        }
        cout<<endl;
    }
}