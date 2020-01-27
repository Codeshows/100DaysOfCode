// https://www.interviewbit.com/problems/counting-triangles/
int Solution::nTriang(vector<int> &A) {
    sort(A.begin(), A.end());
    long long int n = A.size();
    long long int cnt = 0;
    for(int i=n-1;i>=2;i--){
        int l = 0, r=i-1;
        while(l<r){
            if(A[l] + A[r] > A[i]){
                cnt = (cnt + (r-l)%1000000007)%1000000007;
                r--;
            }else{
                l++;
            }
        }
    }
    return cnt;
}
