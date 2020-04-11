// https://www.interviewbit.com/problems/coin-sum-infinite/
// Time Complexity: O(N^2)
long long int MOD =  1e6+7;
typedef long long int ll;
ll coinChangeHelper(vector<int> &A, int B, int start, vector<vector<ll> > &dp){
    if(B < 0){
        return 0;
    }
    if(B == 0){
        return 1;
    }
    if(dp[B][start] != -1){
        return dp[B][start];
    }
    int n = A.size();
    ll ans = 0;
    for(int i=start;i<n;i++){
        ans = (ans +  coinChangeHelper(A, B - A[i], i, dp)%MOD)%MOD;
    }
    return dp[B][start] = ans;
}
int Solution::coinchange2(vector<int> &A, int B) {
    int n = A.size();
    vector<vector<ll> > dp(B+1, vector<ll>(n+1, -1));
    return coinChangeHelper(A, B, 0, dp);
}
