// https://www.interviewbit.com/problems/coins-in-a-line/

int Solution::maxcoin(vector<int> &A) {
    int n = A.size();
    int i = 0;
    int j = n-1;
    int dp[n][n];
    memset(dp, -1, sizeof(dp));
    for(int gap=0;gap<n;gap++){
        for(int i=0, j=gap;j<n;i++, j++){
            int x = (i+2<=j)?dp[i+2][j]:0;
            int y = (i+1<=j-1)?dp[i+1][j-1]:0;
            int z = (i<=j-2)?dp[i][j-2]:0;
            dp[i][j] = max(A[i] + min(x, y), A[j] + min(y, z));
        }
    }
    return dp[0][n-1];
}
