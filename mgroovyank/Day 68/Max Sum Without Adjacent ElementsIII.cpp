// https://www.interviewbit.com/problems/max-sum-without-adjacent-elements/

vector<vector<int> >dp;
int adjacentHelper(vector<vector<int> > &A, int cf, int cl){
    if(cf>cl){
        return 0;
    }
    if(dp[cf][cl]){
        return dp[cf][cl];
    }
    int sum = 0;
    for(int j=cf;j<=cl;j++){
        int temp = max(A[0][j], A[1][j]) + adjacentHelper(A, cf, j-2) + adjacentHelper(A, j+2, cl);
        sum = max(sum ,temp);
    }
    
    return dp[cf][cl] = sum;
}
int Solution::adjacent(vector<vector<int> > &A) {
    dp.clear();
    int n = A[0].size();
    vector<int> v(n, 0);
    dp.assign(n, v);
    return adjacentHelper(A, 0, n-1);
}
