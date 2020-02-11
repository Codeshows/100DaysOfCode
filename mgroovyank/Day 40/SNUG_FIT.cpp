#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define ll long long int
using namespace std;
int binarySearch(vector<ll> v, int l, int r, ll val){
  if(r<l){
    ll diff1 = INT_MAX;
    ll diff2 = INT_MAX;
    if(r>=0){
      diff1 = abs(v[r] - val);
    }
    if(l<v.size()){
      diff2 = abs(val - v[l]);
    }
    if(diff1>=diff2){
      return l;
    }else if(diff2>diff1){
      return r;
    }
  }
  int mid = l + (r-l)/2;
  if(v[mid] == val){
    return mid;
  }
  if(v[mid]>val){
    return binarySearch(v, l, mid-1, val);
  }
  return binarySearch(v, mid+1, r,val);
}
int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<ll> a(n,0),b(n,0);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    sort(b.begin(), b.end());
    int sum = 0;
   for(int i=0;i<n;i++){
      int srch = binarySearch(b, 0, b.size()-1, a[i]);
      sum = sum + min(a[i], b[srch]);
      b.erase(b.begin()+srch);
    }
    cout<<sum<<"\n";
  }
}
