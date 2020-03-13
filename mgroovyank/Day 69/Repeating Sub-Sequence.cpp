// https://www.interviewbit.com/problems/repeating-subsequence/


int Solution::anytwo(string A) {
    int n = A.length();
    vector<int> temp(n+1, 0);
    vector<vector<int> > lcs(n+1, temp);
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(A[i-1] == A[j-1] && (i-1 != j-1)){
                lcs[i][j] = lcs[i-1][j-1] + 1;
            }else{
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
            }
        }
    }
    if(lcs[n][n] >= 2){
        return 1;
    }
    return 0;
}
