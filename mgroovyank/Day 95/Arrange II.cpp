// https://www.interviewbit.com/problems/arrange-ii/
// Time Complexity: O(stables * horses * horses)

int Solution::arrange(string A, int B) {
    int n = A.length();
    if(n < B){
        return -1;
    }
    vector<vector<int> > dp(B+1, vector<int>(n+1, 1e9));
    dp[0][0] = 0;
    for(int stables=1;stables<=B;stables++){
        for(int horses=1;horses<=n;horses++){
            int w = 0;
            int b = 0;
            for(int last=horses;last>=stables;last--){
                w += (A[last-1] == 'W');
                b += (A[last-1] == 'B');
                dp[stables][horses] = min(dp[stables][horses], dp[stables-1][last-1] + w*b);
            }
        }
    }
        return dp[B][n];
}
