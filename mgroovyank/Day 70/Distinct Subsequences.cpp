// https://www.interviewbit.com/problems/distinct-subsequences/

int Solution::numDistinct(string A, string B) {
    int a = A.length();
    int b = B.length();
    if(b>a){
        return 0;
    }
    if(A == B){
        return 1;
    }
    vector<int> temp(a+1, 0);
    vector<vector<int> >dp(b+1, temp);
    for(int j=0;j<a+1;j++){
        dp[0][j] = 1;
    }
    for(int i=1;i<b+1;i++){
        for(int j=1;j<a+1;j++){
            if(A[j-1] == B[i-1]){
                dp[i][j] = dp[i-1][j-1] + dp[i][j-1];
            }else{
                dp[i][j] = dp[i][j-1];
            }
        }
    }
   
    return dp[b][a];
}
