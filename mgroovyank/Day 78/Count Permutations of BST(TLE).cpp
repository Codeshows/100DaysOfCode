// https://www.interviewbit.com/problems/count-permutations-of-bst/

long long int MOD = 1000000007;
int Solution::cntPermBST(int A, int B) {
    if(A <= 1){
        if(B == 0){
            return 1;
        }
        return 0;
    }
    long long int chooseDp[A+1][B+1];
    memset(chooseDp, 0, sizeof(chooseDp));
    for(long long int n=0;n<=A;n++){
        chooseDp[n][0] = 1;
        chooseDp[n][n] = 1;
    }
    for(long long int n=1;n<=A;n++){
        for(long long int r=1;r<n;r++){
            chooseDp[n][r] = (chooseDp[n-1][r-1] + chooseDp[n-1][r])%MOD;
        }
    }
    long int ans = 0;
    for(long long int i=1;i<=A;i++){
        long long int left = i-1;
        long long int right = A-i;
        long long int temp = 0;
        for(long long int j=0;j<=B-2;j++){
            temp = (temp + (cntPermBST(left, j)%MOD * cntPermBST(right, B-1)%MOD)%MOD)%MOD;
        }
        for(long long int j=0;j<=B-2;j++){
            temp = (temp + (cntPermBST(left, B-1)%MOD * cntPermBST(right, j)%MOD)%MOD)%MOD;
        }
        temp = (temp + (cntPermBST(left, B-1)%MOD * cntPermBST(right, B-1)%MOD)%MOD)%MOD;
        ans = (ans + temp * chooseDp[left+right][right]%MOD)%MOD;
    }
    return ans;
}
