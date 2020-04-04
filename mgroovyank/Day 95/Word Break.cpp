// https://www.interviewbit.com/problems/word-break/
// Time Complexity: O(N*S) where S is the length of the largest string in B
 
int Solution::wordBreak(string A, vector<string> &B) {
    int n = A.length();
    unordered_set<string> b(B.begin(), B.end());
    vector<bool> dp(n, 0);
    for(int i=0;i<n;i++){
        int j = i;
        string temp = "";
        while(j>=0){
            temp = A[j] + temp;
            if(j == 0){
                if(b.find(temp) != b.end()){
                    dp[i] = 1;
                    break;
                }
            }else{
                if(b.find(temp) != b.end() && dp[j-1]){
                    dp[i] = 1;
                    break;
                }
            }
            j--;
        }
    }
    return dp[n-1];
}
