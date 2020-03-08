// https://www.interviewbit.com/problems/max-sum-without-adjacent-elements/

vector<vector<int> > dp;
int adjacentHelper(vector<vector<int> > &A, int cl, int inc_curr){
    if(cl<0){
        return 0;
    }
    if(dp[cl][inc_curr]){
        return dp[cl][inc_curr];
    }
    int temp = 0;
    if(inc_curr){
        temp+= max(A[0][cl], A[1][cl]) + adjacentHelper(A, cl-1, 0);
    }else{
        temp+= max(adjacentHelper(A, cl-1, 0), adjacentHelper(A, cl-1, 1));
    }
    return dp[cl][inc_curr] = temp;
}
int Solution::adjacent(vector<vector<int> > &A) {
    dp.clear();
    int n = A[0].size();
    vector<int> temp(2, 0);
    dp.assign(n, temp);
    return max(adjacentHelper(A, n-1, 0),adjacentHelper(A, n-1, 1)) ;
}
