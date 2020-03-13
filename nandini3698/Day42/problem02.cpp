#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int s1=0,s2=0;
        if(s.size()>=4){
        for(int i=0;i<s.size()-3;i++){
            if(s[i]=='S'&&s[i+1]=='U'&&s[i+2]=='V'&&s[i+3]=='O'){
                i+=4;
                if(s[i]=='J'&&s[i+1]=='I'&&s[i+2]=='T'&&i<s.size()){
                    i+=3;
                    s2++;
                }
                else
                    s1++;
                i--;
            }
        }
        }
        cout<<"SUVO = "<<s1<<","<<" SUVOJIT = "<<s2<<endl;
    }
}