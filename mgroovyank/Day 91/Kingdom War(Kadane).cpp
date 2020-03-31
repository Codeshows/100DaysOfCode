// https://www.interviewbit.com/problems/kingdom-war/
// Time Complexity: O(N^3)


int kadane(vector<int> &temp){
    int n = temp.size();
    int max_ending_here = 0;
    int max_so_far = INT_MIN;
    for(int i=0;i<n;i++){
        max_ending_here += temp[i];
        if(max_ending_here > max_so_far){
            max_so_far = max_ending_here;
        }
        if(max_ending_here < 0){
            max_ending_here = 0;
        }
    }
    return max_so_far;
}
int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    int ans = -201;
    for(int left=0;left<m;left++){
        vector<int> temp(n, 0);
        for(int right=left;right<m;right++){
            for(int row=0;row<n;row++){
                temp[row] += A[row][right];
            }
            ans = max(ans, kadane(temp));
        }
    }
    return ans;
}
