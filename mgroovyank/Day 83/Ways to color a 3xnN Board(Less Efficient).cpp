//https://www.interviewbit.com/problems/ways-to-color-a-3xn-board/


long long int MOD = 1e9 + 7;
typedef long long int ll;
ll dp[4][4][4][100001];
int solveHelper(ll p, ll q, ll r, ll n, ll A){
    if(n == A-1){
        return 1;
    }
    if(dp[p][q][r][n] != -1){
        return dp[p][q][r][n];
    }
    ll ways = 0;
    int i, j, k;
    for(int i=0;i<4;i++){
        if(i == p){
            continue;
        }
        for(int j=0;j<4;j++){
            if(j == q || j == i){
                continue;
            }
            for(int k=0;k<4;k++){
                if(k == j || k  == r){
                    continue;
                }
                dp[i][j][k][n+1] = solveHelper(i, j, k, n+1, A)%MOD;
                ways = (ways + dp[i][j][k][n+1])%MOD;
            }
        }
    }
    return ways;
}
int Solution::solve(int A) {
    if(A <= 0){
        return 0;
    }
    memset(dp, -1, sizeof(dp));
    ll ways = 0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(j == i){
                continue;
            }
            for(int k=0;k<4;k++){
                if(k == j){
                    continue;
                }
                dp[i][j][k][0] = solveHelper(i, j, k, 0, A)%MOD;
                ways = (ways + dp[i][j][k][0])%MOD;
            }
        }
    }
    return ways;
}
