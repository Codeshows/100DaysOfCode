// https://www.interviewbit.com/problems/scramble-string/

int dp[51][51][51];
int isScrambleHelper(string A, string B, int sia, int sib, int len){
    if(dp[sia][sib][len] != -1){
        return dp[sia][sib][len];
    }
    if(A.substr(sia, len) == B.substr(sib, len)){
        return dp[sia][sib][len] = 1;
    }
    for(int i=sia+1;i<sia+len;i++){
        if(isScrambleHelper(A, B, sia, sib+len-(i-sia), i-sia) && isScrambleHelper(A,B,i,sib,len-(i-sia))){
            return dp[sia][sib][len] = 1;
        }
        if(isScrambleHelper(A,B,sia,sib,i-sia) && isScrambleHelper(A,B,i,sib+i-sia, len-(i-sia))){
            return dp[sia][sib][len] = 1;
        }
    }
    return dp[sia][sib][len] = 0;
}
int Solution::isScramble(const string A, const string B) {
    int a = A.length();
    int b = B.length();
    if(a == 0 && b == 0){
        return 1;
    }
    if(a!=b){
        return 0;
    }
    if(A == B){
        return 1;
    }
    memset(dp, -1, sizeof(dp));
    return isScrambleHelper(A, B, 0, 0, a);
}
