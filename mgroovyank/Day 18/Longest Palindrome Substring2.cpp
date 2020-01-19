//https://www.interviewbit.com/problems/longest-palindromic-substring/

string Solution::longestPalindrome(string A) {
    string ans;
    int n = A.length();
    if(n == 0){
        return ans;
    }
    int maxLength = 1;
    int start = 0;
    for(int center = 1;center<n;center++){
        int low = center - 1;
        int high = center;
        while(low>=0 && high<n && A[low] == A[high]){
            if(high - low + 1 > maxLength){
                start = low;
                maxLength = high - low + 1;
            }
            low--;
            high++;
        }
        low = center - 1;
        high = center + 1;
        while(low>=0 && high<n && A[low] == A[high]){
            if(high - low + 1 > maxLength){
                start = low;
                maxLength = high - low + 1;
            }
            low--;
            high++;
        }
    }
    for(int i = start;i<start + maxLength;i++){
        ans += A[i];
    }
    return ans;
}
