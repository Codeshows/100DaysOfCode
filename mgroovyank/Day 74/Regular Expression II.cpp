// https://www.interviewbit.com/problems/regular-expression-ii/

int Solution::isMatch(const string A, const string B) {
    int a = A.length();
    int b = B.length();
    vector<int> dp(a+1, 0);
    dp[a] = 1;
    for(int i=b-1;i>=0;){
        vector<int> newDp(a+1, 0);
        if(B[i] == '*'){
            newDp[a] = dp[a];
        }
        for(int j=a-1;j>=0;j--){
            if(B[i] == '*'){
                newDp[j] = dp[j] || (((B[i-1] == '.') || (B[i-1] == A[j])) && (dp[j+1] || newDp[j+1]));
            }else if(A[j] == B[i] || B[i] == '.'){
                newDp[j] = dp[j+1];
            }else{
                newDp[j] = 0;
            }
        }
        if(B[i] == '*'){
            i = i - 2;
        }else{
            i--;
        }
        dp = newDp;
    }
    return dp[0];
}
