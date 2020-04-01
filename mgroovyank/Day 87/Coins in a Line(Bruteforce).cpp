// https://www.interviewbit.com/problems/coins-in-a-line/
// Time complexity: O(N^K) (Exponential)

int maxcoinhelper(vector<int> &A, int left, int right, int turn){
    if(right<left){
        return 0;
    }
    if(turn == 0){
        if(A[left]>A[right]){
            return maxcoinhelper(A, left+1, right, !turn);
        }else{
            return maxcoinhelper(A, left, right-1, !turn);
        }
    }
    return max(A[left] + maxcoinhelper(A, left+1, right, !turn), A[right] +
                    maxcoinhelper(A, left, right-1, !turn));
}
int Solution::maxcoin(vector<int> &A) {
    int n = A.size();
    int i = 0;
    int j = n-1;
    return maxcoinhelper(A, 0, n-1, 1);
}
