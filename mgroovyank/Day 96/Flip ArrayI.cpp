// https://www.interviewbit.com/problems/flip-array/
// Time Complexity: O(N^2)
int Solution::solve(const vector<int> &A) {
    int n = A.size();   
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + A[i];
    } 
    sum = sum / 2;
    vector<vector<long long int> > dp(n+1, vector<long long int>(sum+1, INT_MAX));
    for(int i=0;i<=n;i++){
        dp[i][0] = 0;
    } 
    for(int i=1;i<=n;i++){
        for(int j=A[i-1];j<=sum;j++){
            dp[i][j] = min(dp[i-1][j] , 1 + dp[i-1][j-A[i-1]]); 
        }
    }   
    for(int i=sum;i>=0;i--){
        if(dp[n][i] != INT_MAX){
            return dp[n][i];
        }
    }
}
