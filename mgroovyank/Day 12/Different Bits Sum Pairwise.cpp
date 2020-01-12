//https://www.interviewbit.com/problems/different-bits-sum-pairwise/
int Solution::cntBits(vector<int> &A) {
    int n = A.size();
    long long int ans=0;
    long long int count;
    long long int k;
    for(int i=0;i<32;i++){
        count = 0;
        for(int j=0;j<n;j++){
            k=A[j];
            int temp = (k>>i)&1LL;
            count = count + temp;
        }
        ans = ans + 2*count * (n - count);
    }
    ans%=1000000007;
    return ans;
}
