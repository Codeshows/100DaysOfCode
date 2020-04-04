// https://www.interviewbit.com/problems/min-sum-path-in-triangle/
// Time Complexity: O(N^2)


int minimumTotalHelper(vector<vector<int> > &A, int row, int col, vector<vector<int> > &dp){
    if(row == A.size()){
        return 0;
    }
    if(dp[row][col]!=-1){
        return dp[row][col];
    }
    int sum = 0;
    sum = A[row][col] + min(minimumTotalHelper(A, row+1, col, dp), minimumTotalHelper(A, row+1, col+1, dp));
    return dp[row][col] = sum;
    
}
int Solution::minimumTotal(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more detail
    int n = A.size();
    vector<vector<int> > dp(n, vector<int>(n,-1));
    return minimumTotalHelper(A, 0, 0, dp);
    
}
