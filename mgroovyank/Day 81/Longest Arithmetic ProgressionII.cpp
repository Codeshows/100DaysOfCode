// https://www.interviewbit.com/problems/longest-arithmetic-progression/

int Solution::solve(const vector<int> &A) {
    int n = A.size();
    int ans = 1;
    vector<vector<int> > dp(n, vector<int>(n, 0));
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            dp[i][j] = 2;
            int x = 2*A[i] - A[j];
            int pos = -1;
            for(int k=i-1;k>=0;k--){
                if(x == A[k]){
                    pos = k;
                    break;
                }
            }
            if(pos != -1){
                dp[i][j] = max(dp[i][j], dp[pos][i] + 1);
            }
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;
}
