// https://www.interviewbit.com/problems/unique-paths-in-a-grid/
// Time Complexity: O(N^2)


int helper(vector<vector<int> > &A, int x, int y, vector<vector<int> > &dp){
    int n = A.size();
    int m = A[0].size();
    if(x == n || y == m){
        return 0;
    }
    if(dp[x][y] != -1){
        return dp[x][y];
    }
    if(A[x][y] == 1){
        return dp[x][y] = 0;
    }
    if(x == n-1 && y == m-1){
        return dp[x][y] = 1;
    }
    return dp[x][y] = helper(A, x, y+1, dp) + helper(A, x+1, y, dp);
}
int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    vector<vector<int> > dp(n, vector<int>(m, -1));
    return helper(A, 0, 0, dp);
}
