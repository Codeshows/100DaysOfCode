// https://www.interviewbit.com/problems/max-sum-without-adjacent-elements/


int Solution::adjacent(vector<vector<int> > &A) {
    int n = A[0].size();
    vector<int> temp(2, 0);
    vector<vector<int> > dp(n, temp);
    dp[0][1] = max(A[0][0], A[1][0]);
    for(int i=1;i<n;i++){
        int cur_element = max(A[0][i], A[1][i]);
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
        dp[i][1] = cur_element + dp[i-1][0];
    }
    return max(dp[n-1][0], dp[n-1][1]);
}
