// https://www.interviewbit.com/problems/tushars-birthday-party/
// Time Complexity: O(Dishes * Capacity)

#define INF 10000000
int Solution::solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int friends = A.size();
    int dishes= B.size();
    int maxCapacity = *max_element(A.begin(), A.end());
    vector<vector<int> >dp(maxCapacity+1, vector<int>(dishes+1, 0));
    for(int c=0;c<=maxCapacity;c++){
        for(int d=0;d<=dishes;d++){
            if(c == 0){
                dp[c][d] = 0;
                continue;
            }
            if(d == 0){
                dp[c][d] = INF;
                continue;
            }
            if(c >= B[d-1]){
                dp[c][d] = min(C[d-1] + dp[c-B[d-1]][d], dp[c][d-1]);
            }else{
                dp[c][d] = dp[c][d-1];
            }
        }
    }
    int ans = 0;
    for(int f=0;f<friends;f++){
        ans += dp[A[f]][dishes];
    }
    return ans;
}
