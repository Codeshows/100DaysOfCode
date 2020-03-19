// https://www.interviewbit.com/problems/scramble-string/


unordered_map<string, int> dp;
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
    string key = A + "_" + B;
    if(dp.find(key) != dp.end()){
        return dp[key];
    }
    for(int i=1;i<a;i++){
        string left = A.substr(0, i);
        string right = A.substr(i);
        if(isScramble(left, B.substr(b-i)) && isScramble(right, B.substr(0, b-i))){
            return dp[key] = 1;
        }
        if(isScramble(left, B.substr(0, i)) && isScramble(right, B.substr(i))){
            return dp[key] = 1;
        }
    }
    return dp[key] = 0;
}
