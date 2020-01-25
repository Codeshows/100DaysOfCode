#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test() ll t;cin>>t;while(t--)
int main()
 {
    test(){
        string s;
        cin>>s;
        ll pd=s.length()-1;
        for(ll i=s.length()-1;i>=0;i--){
            if(s[i]=='.'){
                ll t=i+1;
                while(t<=pd){
                    cout<<s[t];
                    t++;
                }
                cout<<".";
                pd=i-1;
            }
            if(i==0){
                ll t=i;
                while(t<=pd){
                    cout<<s[t];
                    t++;
                }
            }
        }
        cout<<endl;
    }
	return 0;
}