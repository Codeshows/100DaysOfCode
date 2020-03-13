// https://www.interviewbit.com/problems/interleaving-strings/
short dp[101][101][101];
bool InterleaveHelper(string A, string B, string C, int m, int n, int l){
    if(m == A.length() && n == B.length()){
        return l == C.length();
    }
    if(l >= C.length()){
        return 0;
    }
    if(dp[m][n][l]!=-1){
        return dp[m][n][l];
    }
    bool answer = false;
    if (m <A.length() && A[m] == C[l]){
        answer |= InterleaveHelper(A, B, C, m+1, n, l+1);
    } 
    if (n <B.length() && B[n] == C[l]){
        answer |= InterleaveHelper(A, B, C, m, n+1, l+1);
    }
    return dp[m][n][l] = answer;
}
int Solution::isInterleave(string A, string B, string C) {
    int a = A.length();
    int b = B.length();
    int c = C.length();
    if(a+b != c){
        return 0;
    }
    memset(dp, -1, sizeof(dp));
    return InterleaveHelper(A, B, C, 0, 0, 0);
}
