#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
    int n;
    cin>>n;
    n++;
    unordered_map<int,int>m;
    while(n--){
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
            if(s[i]<='9' && s[i]>='1'){
                int t;
                if((i+1)<s.size() && s[i+1]<='9' && s[i+1]>='0'){
                    t=(s[i]-'0')*10+(s[i+1]-'0');
                    i++;
                }
                else
                    t=s[i]-'0';
                m[t]++;
                if(s[0]=='G')
                    m[t]++;
            }
    }
    int mx=0,p=0,ans;
    for(int i=1;i<=30;i++)
        mx=max(mx,m[i]);
    
    for(int i=0;i<=30;i++){
        if(m[i]==mx){
            ans=i;
            p++;
        }
        if(p>1)
            break;
    }
    //cout<<m[19]<<" "<<m[21];
    if(p==1 && (ans==19 || ans==20))
        cout<<"Date";
    else
        cout<<"No Date";


}





