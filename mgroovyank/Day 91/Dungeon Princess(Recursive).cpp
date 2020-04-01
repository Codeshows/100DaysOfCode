// https://www.interviewbit.com/problems/dungeon-princess/
// Time Complexity: O(N^2)

int helper(vector<vector<int> > &A, int i, int j, vector<vector<int> > &dp){
    int n = A.size();
    int m = A[0].size();
    if(i == n-1 && j == m-1){
        if(A[i][j] >= 0){
            return dp[i][j] = 1;
        }
        return dp[i][j] = 1-A[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans = INT_MAX;
    if(j+1<m){
        ans = min(ans, helper(A, i, j+1, dp));
    }
    if(i+1<n){
        ans = min(ans, helper(A, i+1, j, dp));
    }
    if(ans <= A[i][j]){
        return dp[i][j]=1;
    }
    return dp[i][j] = ans - A[i][j];
}
int Solution::calculateMinimumHP(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    vector<vector<int> > dp(n, vector<int>(m, -1));
    return helper(A, 0, 0, dp);
}
