// https://www.interviewbit.com/problems/rain-water-trapped/

int Solution::trap(const vector<int> &A) {
    int n = A.size();
    int l = 0;
    int r = n-1;
    int maxl = 0;
    int maxr = 0;
    int ans = 0;
    while(l<=r){
        if(A[l]<=A[r]){
            if(A[l]>=maxl){
                maxl = A[l];
            }else{
                ans += maxl - A[l];
            }
            l++;
        }else{
            if(A[r]>=maxr){
                maxr = A[r];
            }else{
                ans += maxr - A[r];
            }
            r--;
        }
    }
    return ans;
}
