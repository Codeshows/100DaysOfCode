// https://www.interviewbit.com/problems/coin-sum-infinite/
// Time Complexity: O(N^2)
long long int MOD = 1e6+7;
int Solution::coinchange2(vector<int> &A, int B) {
    int n = A.size();
    vector<long long int> dp(B+1, 0);
    dp[0] = 1;
    for(int coin=0;coin<n;coin++){
        for(int sum=1;sum<=B;sum++){
            if(A[coin] <= sum){
                dp[sum] = (dp[sum] + dp[sum - A[coin]])%MOD;
            }
        }
    }
    return dp[B];
}
