// https://www.interviewbit.com/problems/length-of-longest-subsequence/
int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n = A.size();
    if(A.size() == 0){
        return 0;
    }
    
    vector<int> lis(n),lds(n);
    for(int i=0;i<n;i++){
        lis[i] = 1;
        lds[i] = 1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[i]>A[j]){
                lis[i]=max(lis[i], lis[j]+1);
            }
        }
    }
    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(A[i]>A[j]){
                lds[i]=max(lds[i], lds[j]+1);
            }
        }
    }
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi, lis[i] + lds[i] - 1);
    }
    return maxi;
}
