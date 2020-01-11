//https://www.interviewbit.com/problems/single-number-ii/

int Solution::singleNumber(const vector<int> &A) {
    int ones =0, twos = 0;
    for(int i=0;i<A.size();i++){
        ones = (ones ^ A[i]) & ~twos;
        twos = (twos ^ A[i]) & ~ones;
    }
    return ones;
}
