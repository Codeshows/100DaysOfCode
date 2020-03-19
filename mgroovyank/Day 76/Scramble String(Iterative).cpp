// https://www.interviewbit.com/problems/scramble-string/

int Solution::isScramble(const string A, const string B) {
    int len = A.length();
    if(len != B.length()){
        return 0;
    }
    int dp[len+1][len+1][len+1];
    memset(dp, 0, sizeof(dp));
    for(int i=len-1;i>=0;i--){
        for(int j=len-1;j>=0;j--){
            dp[i][j][1] = (A[i] == B[j]);
            for(int l=2;i+l<=len && j+l<=len;l++){
                for(int n=1;n<l;n++){
                    dp[i][j][l] |= dp[i][j][n] && dp[i+n][j+n][l-n];
                    dp[i][j][l] |= dp[i][j+l-n][n] && dp[i+n][j][l-n];
                }
            }
        }
    }
    return dp[0][0][len];
}
