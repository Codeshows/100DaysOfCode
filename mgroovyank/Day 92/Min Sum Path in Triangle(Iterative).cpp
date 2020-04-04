// https://www.interviewbit.com/problems/min-sum-path-in-triangle/
// Time Complexity: O(N^2)

// Bottom Up Approach


int Solution::minimumTotal(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more detail
    int n = A.size();
    int dp[n+1];
    memset(dp, 0, sizeof(dp));
    for(int row=n-1;row>=0;row--){
        for(int col=0;col<A[row].size();col++){
            dp[col] = A[row][col] + min(dp[col], dp[col+1]);
        }
    }
    return dp[0];
}
