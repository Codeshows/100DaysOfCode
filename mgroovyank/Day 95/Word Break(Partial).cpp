// https://www.interviewbit.com/problems/word-break/
// Time Complexity: 

int dp[6501];
int wordBreakHelper(string A, int start, set<string> &b){
    int end = A.length() - 1;
    if(start>end){
        return 1;
    }
    if(dp[start] !=-1){
        return dp[start];
    }
    for(int i=start;i<=end;i++){
        string temp = A.substr(start, i-start+1);
        if(b.find(temp) == b.end()){
            continue;
        }
        if(!wordBreakHelper(A, i+1, b)){
            continue;
        }
        return dp[start] = 1;
    }
    return dp[start] = 0;
}
int Solution::wordBreak(string A, vector<string> &B) {
    int n = A.length();
    unordered_set<string> b(B.begin(), B.end());
    memset(dp, -1, sizeof(dp));
    return wordBreakHelper(A, 0, b);
}
