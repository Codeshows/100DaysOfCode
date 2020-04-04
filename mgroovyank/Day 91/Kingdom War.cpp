// https://www.interviewbit.com/problems/kingdom-war/
// Time Complexity: O(N^2)

int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    int dp[n][m];
    memset(dp, 0, sizeof(dp));
    int ans = -201;
    int k = n-1;
    int l = m-1;
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(i == k && j == l){
                dp[i][j] = A[k][l];
                ans = max(ans, dp[i][j]);
                continue;
            }
            int t1 = 0 , t2 = 0, t3 = 0;
            if(j+1<m){
                t1 = dp[i][j+1];
            }
            if(i+1<n){
                t2 = dp[i+1][j];
            }
            if(j+1<m && i+1<n){
                t3 = dp[i+1][j+1];
            }
            dp[i][j] = t1 + t2 - t3 + A[i][j];
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;
}
