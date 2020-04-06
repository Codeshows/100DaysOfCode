// https://www.interviewbit.com/problems/bulbs/
// Time Complexity: O(N^2)

int Solution::bulbs(vector<int> &A) {
    int count = 0;
    int n = A.size();
    for(int i=0;i<n;i++){
        if(A[i] == 0){
            count++;
            for(int j=i;j<n;j++){
                A[j] = 1 - A[j];
            }
        }
    }
    return count;
}
