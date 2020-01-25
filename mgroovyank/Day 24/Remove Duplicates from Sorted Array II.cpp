//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/

int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    if(n==0 || n==1 || n==2){
        return n;
    }
    int i,j;
    i=1;
    j=i+1;
    while(j<n){
        if(A[i] == A[j] && A[i] == A[i-1]){
            j++;
            continue;
        }
        i++;
        swap(A[i], A[j]);
        j++;
    }
    return i+1;
}
