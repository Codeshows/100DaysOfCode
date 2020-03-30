// https://www.interviewbit.com/problems/coins-in-a-line/


int dp[501][501];
int maxcoinhelper(vector<int> &A, int left, int right){
    if(right<left){
        return 0;
    }
    if(dp[left][right] != -1){
        return dp[left][right];
    }
    return dp[left][right] = max(A[left] + min(maxcoinhelper(A, left+2, right),
                    maxcoinhelper(A, left+1, right-1)), A[right] +
                    min(maxcoinhelper(A, left+1, right-1),
                    maxcoinhelper(A, left, right-2)));
}
int Solution::maxcoin(vector<int> &A) {
    int n = A.size();
    int i = 0;
    int j = n-1;
    memset(dp, -1, sizeof(dp));
    return maxcoinhelper(A, 0, n-1);
}
