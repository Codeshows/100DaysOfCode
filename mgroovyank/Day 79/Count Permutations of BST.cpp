// https://www.interviewbit.com/problems/count-permutations-of-bst/


#define MOD 1000000007ll
typedef long long LL;
vector< vector<LL > > choose, dp;
LL cntPermHelper(LL A, LL B){ 
    if(A<=1){
        return (B == 0);
    }
    if(B<0){
        return 0;
    }
    if(dp[A][B] != -1){
        return dp[A][B];
    }
    LL ret=0;
    LL left, right;
    for(LL i=1; i<=A; i++){
        left = i-1;
        right = A-left-1;
        LL temp = 0 ,ret1=0;
        for(LL j=0; j<=B-2; j++){
            temp = (temp + cntPermHelper(left, j))%MOD;
            
        }
        ret1 = (ret1 + (temp%MOD * cntPermHelper(right, B-1)%MOD)%MOD)%MOD;
        temp = 0;
        for(LL j=0;j<=B-2;j++){
            temp = (temp + cntPermHelper(right, j))%MOD;
        }
        ret1 = (ret1 + (temp%MOD * cntPermHelper(left, B-1)%MOD)%MOD)%MOD;
        ret1 = (ret1 + (cntPermHelper(left, B-1)%MOD * cntPermHelper(right, B-1)%MOD)%MOD)%MOD;
        ret1 = (ret1*choose[left+right][left])%MOD;
        ret = (ret + ret1)%MOD;
    }
    return dp[A][B] = ret;
}

int Solution::cntPermBST(int A, int B) {
    LL n = 50;
    choose.clear();
    dp.clear();
    choose.resize(n+1, vector<LL>(n+1, 0));
    dp.resize(n+1,vector<LL>(n+1, -1));
    choose[0][0]=1;
    for(LL i=1; i<=n; i++){
        choose[i][0]=1;
        for(LL j=1; j<=i; j++){
            choose[i][j]=choose[i-1][j];
            choose[i][j] = (choose[i][j] + choose[i-1][j-1])%MOD;
        }
    }
    return cntPermHelper(A, B);
}
