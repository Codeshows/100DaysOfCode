//https://www.interviewbit.com/problems/kth-manhattan-distance-neighbourhood/
// Time Complexity: O(N*M*K) 


vector<vector<int> > Solution::solve(int A, vector<vector<int> > &B) {
    int n = B.size();
    int m = B[0].size();
    int dp[n+2][m+2][A+2];
    memset(dp, -1, sizeof(dp));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dp[i][j][0] = B[i][j];
        }
    }
    for(int k=1;k<=A;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int temp = -1;
                if(i-1>=0){
                    temp = max(temp, dp[i-1][j][k-1]);
                    if(j-1>=0 && k-2>=0){
                        temp = max(temp, dp[i-1][j-1][k-2]);
                    }
                    if(j+1<m && k-2>=0){
                        temp = max(temp, dp[i-1][j+1][k-2]);
                    }
                }
                if(i+1<n){
                    temp = max(temp, dp[i+1][j][k-1]);
                    if(j-1>=0 && k-2>=0){
                        temp = max(temp, dp[i+1][j-1][k-2]);
                    }
                    if(j+1<m && k-2>=0){
                        temp = max(temp, dp[i+1][j+1][k-2]);
                    }
                }
                if(j-1>=0){
                    temp = max(temp, dp[i][j-1][k-1]);
                }
                if(j+1<m){
                    temp = max(temp, dp[i][j+1][k-1]);
                }
                dp[i][j][k] = max(B[i][j], temp);
            }
        }
    }
    vector<vector<int> > ans(n, vector<int>(m, 0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[i][j] = dp[i][j][A];
        }
    }
    return ans;
}
