// https://www.interviewbit.com/problems/kth-manhattan-distance-neighbourhood/
// Reduced the space complexity

vector<vector<int> > Solution::solve(int A, vector<vector<int> > &B) {
    int n = B.size();
    int m = B[0].size();
    vector<vector<vector<int> > > dp(2);
    dp[0] = dp[1] = B;
    for(int k=1;k<=A;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int temp = dp[(k-1)%2][i][j];
                if(i-1>=0){
                    temp = max(temp, dp[(k-1)%2][i-1][j]);
                }
                if(i+1<n){
                    temp = max(temp, dp[(k-1)%2][i+1][j]);
                }
                if(j-1>=0){
                    temp = max(temp, dp[(k-1)%2][i][j-1]);
                }
                if(j+1<m){
                    temp = max(temp, dp[(k-1)%2][i][j+1]);
                }
                dp[k%2][i][j] = temp;
            }
        }
    }
    return dp[A%2];
}
