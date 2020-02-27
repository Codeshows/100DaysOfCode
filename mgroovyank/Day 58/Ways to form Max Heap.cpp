#define MAXN 105
long long int dp[MAXN];    
long long int ncr[MAXN][MAXN];  
long long int MOD = 1000000007;

long long int choose(int n,int r){
    if(r>n){
        return 0;
    }
    if(n<=1){
        return 1;
    }
    if(r == 0){
        return 1;
    }
    if(ncr[n][r] != -1){
        return ncr[n][r];
    }
    long long int ans = choose(n-1,r-1) + choose(n-1,r);
    ans = ans % MOD;
    return ncr[n][r] = ans;
}

long long int getNumberOfMaxHeaps(int n){
    if(n<=1){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int L;
    int h = log2(n);
    int temp = pow(2, h);
    int p = n - (temp - 1);
    int m = (1<<h);
    if(p>=(m/2)){
        L = temp - 1;
    }else{
        L = temp - 1 - ((m/2) - p);
    }
    long long int ans = (choose(n-1,L)*getNumberOfMaxHeaps(L))%MOD * (getNumberOfMaxHeaps(n-1-L));
    ans = ans % MOD;
    return dp[n] = ans;
}

    
int Solution::solve(int n){
    for(int i=0;i<=n;i++){
        dp[i]=-1;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            ncr[i][j] = -1;
        }
    }
    return (int)getNumberOfMaxHeaps(n);
}
