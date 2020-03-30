// https://www.interviewbit.com/problems/max-rectangle-in-binary-matrix/
// Time Complexity: O(N^4)

int Solution::maximalRectangle(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    int dp[n][m][n][m];
    memset(dp, -1, sizeof(dp));
    int area = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=i;k<n;k++){
                for(int l=j;l<m;l++){
                    if(i == k && j == l){
                        dp[i][j][k][l] = (A[i][j] == 1) ? 1 : 0;
                        area = max(area, dp[i][j][k][l]);
                        continue;
                    }
                    int t1=1, t2=1;
                    if(l-1>=j){
                        t1 = dp[i][j][k][l-1];
                    }
                    if(k-1>=i){
                        t2 = dp[i][j][k-1][l];
                    }
                    dp[i][j][k][l] = ((t1 == 1) && (t2 == 1) && (A[k][l] == 1)) ? 1 : 0;
                    if(dp[i][j][k][l] == 1){
                        area = max(area, (l-j+1)*(k-i+1));
                    }
                    
                }
            }
        }
    }
    return area;
}
