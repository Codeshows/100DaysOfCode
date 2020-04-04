int wordBreakHelper(string A, int start, set<string> &b){
    int end = A.length() - 1;
    if(start>end){
        return 1;
    }
    for(int i=start;i<=end;i++){
        string temp = A.substr(start, i-start+1);
        if(b.find(temp) == b.end()){
            continue;
        }
        if(!wordBreakHelper(A, i+1, b)){
            continue;
        }
        return 1;
    }
    return 0;
}
int Solution::wordBreak(string A, vector<string> &B) {
    int n = A.length();
    unordered_set<string> b(B.begin(), B.end());
    return wordBreakHelper(A, 0, b);
}
