// https://www.interviewbit.com/problems/coins-in-a-line/
// Time Complexity: O(N*N*2) 

int dp[501][501][2];
int maxcoinhelper(vector<int> &A, int left, int right, int turn){
    if(right<left){
        return 0;
    }
    if(dp[left][right][turn] != -1){
        return dp[left][right][turn];
    }
    if(turn == 0){
       return dp[left][right][turn] = min(maxcoinhelper(A, left+1, right, !turn),
                    maxcoinhelper(A, left, right-1, !turn));
    }
    return dp[left][right][turn] = max(A[left] + maxcoinhelper(A, left+1, right, !turn), A[right] +
                    maxcoinhelper(A, left, right-1, !turn));
}
int Solution::maxcoin(vector<int> &A) {
    int n = A.size();
    int i = 0;
    int j = n-1;
    memset(dp, -1, sizeof(dp));
    return maxcoinhelper(A, 0, n-1, 1);
}
