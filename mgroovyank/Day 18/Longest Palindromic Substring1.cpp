//https://www.interviewbit.com/problems/longest-palindromic-substring/
string Solution::longestPalindrome(string A) {
    int n = A.length();
    vector<int> temp(n, 0);
    vector<vector<int> >dp(n,temp);
    int maxLength = 1;
    int start = 0;
    for(int i=0;i<n;i++){
        dp[i][i] = 1;
    }
    for(int i=0;i<n-1;i++){
        if(A[i] == A[i+1]){
            dp[i][i+1] = 1;
            if(maxLength == 1){
                start = i;
                maxLength = 2;
            }
        }
    }
    for(int k=3;k<=n;k++){
        for(int i=0;i<n-k+1;i++){
            if((A[i] == A[i+k-1]) && (dp[i+1][i+k-2] == 1)){
                dp[i][i+k-1] = 1;
                if(k>maxLength){
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
    string res ="";
    for( int i = start; i < start+maxLength; ++i ) {
        res = res + A[i];
    }
    return res;
}
