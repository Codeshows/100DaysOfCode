// https://www.interviewbit.com/problems/dungeon-princess/
// Time Complexity: O(N^2)

int Solution::calculateMinimumHP(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    vector<vector<int> > dp(n, vector<int>(m, INT_MAX));
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(i == n-1 && j == m-1){
                dp[i][j] = A[i][j] >= 0 ? 1 : 1 - A[i][j];
                continue;
            }
            if(j+1<m){
                dp[i][j] = min(dp[i][j+1], dp[i][j]);
            }
            if(i+1<n){
                dp[i][j] = min(dp[i][j], dp[i+1][j]);
            }
            if(dp[i][j]<=A[i][j]){
                dp[i][j] = 1;
            }else{
                dp[i][j] = dp[i][j] - A[i][j];
            }
        }
    }
    return dp[0][0];
}
