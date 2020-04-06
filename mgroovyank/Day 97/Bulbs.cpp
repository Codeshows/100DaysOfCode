// https://www.interviewbit.com/problems/bulbs/
// Time Complexity: O(N)


int Solution::bulbs(vector<int> &A) {
    int count = 0;
    int takeInverse = 0;
    int n = A.size();
    for(int i=0;i<n;i++){
        if(takeInverse){
            if(A[i] == 1){
                count++;
                takeInverse = 1 - takeInverse;
            }
        }else{
            if(A[i] == 0){
                count++;
                takeInverse = 1 - takeInverse;
            }
        }
    }
    return count;
}
