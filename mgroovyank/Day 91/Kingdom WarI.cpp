// https://www.interviewbit.com/problems/kingdom-war/
// Time Complexity: O(N^4)
int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    int dp[n][m];
    memset(dp, 0, sizeof(dp));
    int ans = -201;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=i;k<n;k++){
                for(int l=j;l<m;l++){
                    if(i == k && j == l){
                        dp[k][l] = A[k][l];
                        ans = max(ans, dp[k][l]);
                        continue;
                    }
                    int t1 = 0 , t2 = 0, t3 = 0;
                    if(l-1>=j){
                        t1 = dp[k][l-1];
                    }
                    if(k-1>=i){
                        t2 = dp[k-1][l];
                    }
                    if(l-1>=j && k-1>=i){
                        t3 = dp[k-1][l-1];
                    }
                    dp[k][l] = t1 + t2 - t3 + A[k][l];
                    ans = max(ans, dp[k][l]);
                }
            }
        }
    }
    return ans;
}
