#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        string s;
        cin>>s;
        int o=0;
        string x;
        for(int i=0;i<s.size();i++){
            while(o<s[i]-'0'){
                x.push_back('(');
                o++;
            }
            x.push_back(s[i]);
            if(i!=(s.length()-1)&&s[i]-'0'>s[i+1]-'0'){
                while(s[i+1]-'0'<o){
                    x.push_back(')');
                    o--;
                }
            }
            
        }
        while(o){
            	x.push_back(')');
            	o--;
		}
		cout<<"Case #"<<t<<": "<<x<<endl;
	}   
}