// Same approach as minimizing the maximum absolute difference between elements of a triplet
// https://www.interviewbit.com/problems/array-3-pointers/
int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int a = A.size();
    int b = B.size();
    int c = C.size();
    int ans = INT_MAX;
    int temp_min = INT_MAX;
    int temp_max = INT_MIN;
    int i=0, j=0, k=0;
    while(i<a && j<b && k<c){
        temp_min = min(A[i], min(B[j], C[k]));
        temp_max = max(A[i], max(B[j], C[k]));
        ans = min(ans, temp_max - temp_min);
        if(ans == 0){ break; }
        if(A[i] == temp_min) { i++; continue;}
        if(B[j] == temp_min) { j++; continue;}
        k++;
    }
    return ans;
}
