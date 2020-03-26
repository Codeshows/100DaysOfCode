// https://www.interviewbit.com/problems/n-digit-numbers-with-digit-sum-s-/
long long int MOD = 1e9 + 7; 
typedef long long int ll;
int solveHelper(ll N, ll S){
    if(N<0){
        return 0;
    }
    if(N == 0){
        if(S == 0){
            return 1;
        }
        return 0;
    }
    if(S<0){
        return 0;
    }
    ll ans = 0;
    for(ll i=0;i<10;i++){
        ans = (ans + solveHelper(N-1, S-i)%MOD)%MOD;
    }
    return ans;
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
    ll ans = 0;
    for(ll i=1;i<10;i++){
        ans = (ans + solveHelper(A-1, B-i)%MOD)%MOD;
    }
    return ans;
}
