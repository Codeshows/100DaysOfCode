// http://interviewbit.com/problems/minimize-the-absolute-difference/

int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i = 0, j = 0, k = 0;
    int a = A.size();
    int b = B.size();
    int c = C.size();
    int ans = INT_MAX;
    while(i<a && j<b && k<c){
        int mini = min(min(A[i], B[j]), C[k]);
        int maxi = max(max(A[i], B[j]), C[k]);
        ans = min(ans, abs(maxi-mini));
        if(mini == A[i]){
            i++;
        }else if(mini == B[j]){
            j++;
        }else{
            k++;
        }
    }
    return ans;
}
