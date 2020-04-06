// https://www.interviewbit.com/problems/assign-mice-to-holes/
// Time Complexity: O(NlogN)
int Solution::mice(vector<int> &A, vector<int> &B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int n = A.size();
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        ans = max(ans, abs(A[i] - B[i]));
    }
    return ans;
}
