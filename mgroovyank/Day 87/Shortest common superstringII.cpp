//https://www.geeksforgeeks.org/shortest-superstring-problem/

#include <bits/stdc++.h>
using namespace std;
int findOverlappingPair(string s1, string s2, string &s){
  int max = INT_MIN; 
  int l1 = s1.length(); 
  int l2 = s2.length(); 
  for(int i=1;i<= min(l1, l2);i++){
    if(s1.compare(l1-i, i, s2, 0, i) == 0){ 
      if(max < i){ 
        max = i; 
        s = s1 + s2.substr(i); 
      } 
    } 
  } 
  for(int i = 1; i <= min(l1, l2); i++){
    if(s1.compare(0, i, s2, l2-i, i) == 0){
      if(max < i){ 
        max = i; 
        s = s2 + s1.substr(i); 
      } 
    } 
  } 
  return max;
}
int main() {
  vector<string> v;
  v.push_back("catgc");
  v.push_back("ctaagt");
  v.push_back("ttca");
  v.push_back("gcta");
  v.push_back("atgcatc");
  int n = v.size();
  while(n!=1){
    int max = INT_MIN;
    int l, r;
    string optimalStr;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        string s;
        int combine = findOverlappingPair(v[i], v[j], s); 
        if (max < combine){ 
            max = combine; 
            optimalStr = s; 
            l = i;
            r = j; 
        }
      }
    }
    n--;
    if(max == INT_MIN){
      v[0] = v[0] + v[n]; 
    }else{ 
      v[l] = optimalStr;  
      v[r] = v[n];
    }
  }
  cout<<v[0];
}
