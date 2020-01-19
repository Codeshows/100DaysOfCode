//https://www.interviewbit.com/problems/longest-palindromic-substring/

string Solution::longestPalindrome(string A) {
    string temp = "$";
    string ans;
    int n = A.length();
    if(n == 0){
        return ans;
    }
    
    for(int i=0;i<n;i++){
        temp = temp + A[i] + "$";
    }
    int start = 0;
    int end = 0;
    int i = 0;
    int l = temp.length();
    vector<int> v(l,0);
    for(i=0;i<l;){
        while(start >0 && end<l-1 && temp[start-1] == temp[end+1]){
            start--;
            end++;
        }
        v[i] = end-start+1;
        if(end == l-1){
            break;
        }
        int newCenter = end + (i%2 ==0 ? 1 : 0);
        for(int j=i+1;j<=end;j++){
            v[j] = min(v[i - (j-i)], 2*(end-j)+1);
            if(j + v[i-(j-i)]/2 == end){
                newCenter = j;
                break;
            }
        }
        i = newCenter;
        end = i + v[i]/2;
        start = i - v[i]/2;
    }
    int t = INT_MIN;
    int idx;
    for(int k=0;k<l;k++){
      if(v[k]>t){
        idx = k;
        t = v[k];
      }
    }
    int len = v[idx];
    int s = (len-1)/2;
    int sa = s;
    s = idx - (len-1)/2;
    
    for(int k=s;k<idx+sa;k++){
      if(temp[k] != '$'){
        ans = ans + temp[k];
      }
    }
    return ans;
    
}
