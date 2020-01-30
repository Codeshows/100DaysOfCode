// https://www.interviewbit.com/problems/array-3-pointers/


int binarySearch(const vector<int> &v, int l, int r, int val){
    while(l<=r){
        int mid = l + (r-l)/2;
        if(v[mid] == val){
            return mid;
        }
        if(v[mid] > val){
            return binarySearch(v, l, mid-1, val);
        }
        if(v[mid] < val){
            return binarySearch(v, mid+1, r, val);
        }
    }
    if(r<0){
        return l;
    }
    return r;
}
int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int a = A.size();
    int b = B.size();
    int c = C.size();
    int ans = INT_MAX;
    for(int i=0;i<a;i++){
        int j = binarySearch(B, 0, b-1, A[i]);
        int k = binarySearch(C, 0, c-1, A[i]);
        int cur_ans = max(abs(A[i] - B[j]), max(abs(B[j] - C[k]), abs(C[k] - A[i])));
        ans = min(ans, cur_ans);
    }
    for(int i=0;i<b;i++){
        int j = binarySearch(A, 0, a-1, B[i]);
        int k = binarySearch(C, 0, c-1, B[i]);
        int cur_ans = max(abs(A[j] - B[i]), max(abs(B[i] - C[k]), abs(C[k] - A[j])));
        ans = min(ans, cur_ans);
    }
    for(int i=0;i<c;i++){
        int j = binarySearch(A, 0, a-1, C[i]);
        int k = binarySearch(B, 0, b-1, C[i]);
        int cur_ans = max(abs(A[j] - B[k]), max(abs(B[k] - C[i]), abs(C[i] - A[j])));
        ans = min(ans, cur_ans);
    }
    return ans;
}
