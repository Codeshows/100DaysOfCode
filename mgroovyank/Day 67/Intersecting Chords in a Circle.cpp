// https://www.interviewbit.com/problems/intersecting-chords-in-a-circle/

int MOD = 1000000007;
long long int chordCntHelper(long long int A, vector<long long int> &dp){
    if(A == 0){
        return 1;
    }
    if(dp[A]){
        return dp[A];
    }
    long long int ans = 0;
    for(long long int i=2;i<=2*A;i+=2){
        ans = (ans + (chordCntHelper(((2*A)-i)/2, dp))%MOD * (chordCntHelper((i-2)/2, dp))%MOD)%MOD;
    }
    return dp[A] = ans;
}
int Solution::chordCnt(int A) {
    vector<long long int> dp(A+1,0);
    return chordCntHelper(A, dp);
}
