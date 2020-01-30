//https://www.interviewbit.com/problems/container-with-most-water/

int Solution::maxArea(vector<int> &A) {
    int n = A.size();
    int ans = 0;
    int i=0, j=n-1;
    while(i<j){
        ans = max(ans, (j-i) * min(A[i], A[j]));
        if(A[i] < A[j]){
            i++;
            continue;
        }
        j--;
    }
    return ans;
}
