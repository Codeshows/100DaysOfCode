// https://www.interviewbit.com/problems/regular-expression-ii/


int Solution::isMatch(const string A, const string B) {
    int a = A.length();
    int b = B.length();
    vector<int> temp(a+1, 0);
    vector<vector<int> > dp(b+1, temp);
    dp[0][0] = 1;
    for(int i=1;i<b+1;i++){
        if(B[i] == '*'){
            dp[i][0] = dp[i-1][0];
            dp[i+1][0] = dp[i][0];
        }
    }
    for(int i=1;i<b+1;){
        for(int j=1;j<a+1;j++){
            if(B[i] == '*'){
                dp[i][j] = dp[i-1][j] || (((B[i-1] == '.') || (B[i-1] == A[j-1])) && (dp[i-1][j-1] || dp[i][j-1]));
                dp[i+1][j] = dp[i][j];
            }else if(A[j-1] == B[i-1] || B[i-1] == '.'){
                dp[i][j] = dp[i-1][j-1];
            }else{
                dp[i][j] = 0;
            }
        }
        if(B[i] == '*'){
            i = i + 2;
        }else{
            i++;
        }
    }
    return dp[b][a];
}
