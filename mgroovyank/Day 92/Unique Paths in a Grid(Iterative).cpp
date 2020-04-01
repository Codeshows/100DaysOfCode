// https://www.interviewbit.com/problems/unique-paths-in-a-grid/
// Time Complexity: O(N^2)


int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    vector<vector<int> > dp(n+1, vector<int>(m+1, 0));
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(i == n-1 && j == m-1){
                dp[i][j] = (A[i][j] == 1) ? 0 : 1;
                continue;
            }
            dp[i][j] = (A[i][j] == 1) ? 0 : dp[i][j+1] + dp[i+1][j];
        }
    }
    return dp[0][0];
}
