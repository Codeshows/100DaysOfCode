//https://www.interviewbit.com/problems/zigzag-string/

string Solution::convert(string A, int B) {
    if(B == 1){
        return A;
    }
vector<string> v(B, "");
  int n = A.length();
  int i=0;
  while(i<B && i<n){
    v[i] = v[i] + A[i];
    i++;
  }
  while(i<n){
       int k=B-2;
       while(k>=0 && i<n){
           v[k] = v[k] + A[i];
           i++;
           k--;
       }
       k = 1;
       while(k<B && i<n){
           v[k] = v[k] + A[i];
           i++;
           k++;
       }
  }
    string ans;
    for(i=0;i<B;i++){
        ans+= v[i];
    }
    return ans;
}
