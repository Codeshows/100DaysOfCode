// https://www.interviewbit.com/problems/diffk/
int Solution::diffPossible(vector<int> &A, int B) {
    int n = A.size();
    int i=0,j=1;
    while(i<n && j<n){
        if(i!=j && A[j] - A[i] == B){
            return 1;
        }
        if(A[j] - A[i]<B){
            j++;
        }else{
            i++;
        }
    }
    return 0;
}
