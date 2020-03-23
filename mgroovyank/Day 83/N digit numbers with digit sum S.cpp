// https://www.interviewbit.com/problems/n-digit-numbers-with-digit-sum-s-/

long long int MOD = 1e9 + 7; 
typedef long long int ll;
int solveHelper(ll N, ll S, vector<vector<ll> > &dp){
    if(N<0){
        return 0;
    }
    if(N == 0){
        if(S == 0){
            return dp[N][S] = 1;
        }
        return 0;
    }
    if(S<0){
        return 0;
    }
    if(dp[N][S] != -1){
        return dp[N][S];
    }
    ll ans = 0;
    for(ll i=0;i<10;i++){
        ans = (ans + solveHelper(N-1, S-i, dp)%MOD)%MOD;
    }
    return dp[N][S] = ans;
}
int Solution::solve(int A, int B) {
    if(A<0){
        return 0;
    }
    if(A == 0){
        if(B == 0){
            return 1;
        }
        return 0;
    }
    if(B<0){
        return 0;
    }
    vector<vector<ll> > dp(A+1, vector<ll>(B+1, -1));
    ll ans = 0;
    for(ll i=1;i<10;i++){
        ans = (ans + solveHelper(A-1, B-i, dp)%MOD)%MOD;
    }
    return ans;
}
