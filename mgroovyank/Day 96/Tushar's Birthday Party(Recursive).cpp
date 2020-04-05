// https://www.interviewbit.com/problems/tushars-birthday-party/
// Time Complexity: O(Friends * Dishes * Capacity)

int dp[1001][1001];
int knapSack(const vector<int> &A, const vector<int> &B, const vector<int> &C, int i, int cap){
    if (cap == 0){
        return 0;
    }
    if (i >= B.size() || cap<0){
        return INT_MAX;
    }
    if(dp[i][cap] != -1){
        return dp[i][cap];
    }
    if(cap >= B[i]){
        int temp = knapSack(A, B, C, i, cap - B[i]);// here it seems that i is not out of
        //range but, it can be when cap - B[i]< 0
        if(temp == INT_MAX){
            return dp[i][cap] = knapSack(A, B, C, i+1, cap);
        }
        return dp[i][cap] = min(C[i] + temp, knapSack(A, B, C, i+1, cap));
    }
    return dp[i][cap] = knapSack(A, B, C, i+1, cap);
}

int Solution::solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int n = B.size();
    memset(dp, -1, sizeof(dp));
    int ans = 0;
    for (int i =0; i < A.size(); i++) {
        ans += knapSack(A, B, C, 0, A[i]);
    }
    return ans;
}
