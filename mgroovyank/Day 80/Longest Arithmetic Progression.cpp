// https://www.interviewbit.com/problems/longest-arithmetic-progression/

int Solution::solve(const vector<int> &A) {
    int n = A.size();
    int ans = 1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int cur = 2;
            int last = A[j];
            int cd = A[j] - A[i];
            for(int k=j+1;k<n;k++){
                if(A[k] - last == cd){
                    cur++;
                    last = A[k];
                }
            }
            ans = max(cur, ans);
        }
    }
    return ans;
}
