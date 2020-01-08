//Codeforces 550-A Two Substrings :-

/*You are given string s. Your task is to determine if the given string s contains two non-overlapping 
substrings "AB" and "BA" (the substrings can go in any order).

Input
The only line of input contains a string s of length between 1 and 105 consisting of uppercase Latin 
letters.

Output
Print "YES" (without the quotes), if string s contains two non-overlapping substrings "AB" and "BA", 
and "NO" otherwise.*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
     string s;
     cin>>s;
     int c=0;
     for(ll i=0;i<s.size()-1;i++){
           if(s[i]=='A'&&s[i+1]=='B'){
                 for(ll j=i+2;j<s.size()-1;j++){
                       if(s[j]=='B'&&s[j+1]=='A'){
                        c++;
                        break;}
                 }
                 if(c==1)
                        break;
           }
           if(s[i]=='B'&&s[i+1]=='A'){
                 for(ll j=i+2;j<s.size()-1;j++){
                       if(s[j]=='A'&&s[j+1]=='B'){
                        c++;
                        break;}
                 }
                 if(c==1)
                  break;
           }
     }
     
      if(c==0)
            cout<<"NO";
      else
            cout<<"YES";
      
      
      return 0;
}
