#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    while(s.length()>0 && (s[0]-'0') == 0){
      s.erase(s.begin());
    }
    if(s.length() == 0){
      cout<<"-1"<<"\n";
      continue;
    }
    int i = s.length()-1;
    while(i>=0 && (s[i]-'0')%2 == 0){
      s.erase(s.end()-1);
      i--;
    }
    if(i<0){
      cout<<"-1"<<"\n";
      continue;
    }
    int sum = 0;
    for(i=0;i<n;i++){
      sum = sum + (s[i]-'0');
    }
    if(sum%2 == 0){
      cout<<s<<"\n";
      continue;
    }
    for(i=0;i<s.length();i++){
      if((s[i]-'0')%2!=0){
        if(i == s.length()-1){
          cout<<"-1"<<"\n";
          break;
        }
        s.erase(s.begin()+i);
        while(s.length()>0 && s[0] == 0){
          s.erase(s.begin());
        }
        if(s.length()<=1){
          cout<<"-1"<<"\n";
          break;
        }
        cout<<s<<"\n";
        break;
      }
    }
  }
}
