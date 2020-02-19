// https://www.interviewbit.com/problems/longest-substring-without-repeat/


int Solution::lengthOfLongestSubstring(string A) {
    map<char, int> hash;
    int ans = 0;
    int i,j=0;
    int n = A.length();
    for(i=0;i<n;i++){
        while(j<n){
            if(hash.find(A[j]) == hash.end()){
                hash.insert(make_pair(A[j], 1));
                j++;
                continue;
            }
            if(hash[A[j]] == 0){
                hash[A[j]] = 1;
                j++;
                continue;
            }
            break;
        }
        ans = max(ans, j-i);
        if(j >= n){
            break;
        }
        hash[A[i]] = 0;
    }
    return ans;
}
