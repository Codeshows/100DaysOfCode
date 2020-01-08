// https://www.interviewbit.com/problems/amazing-subarrays/

int Solution::solve(string A) {
    long long int ans = 0;
    int n = A.length();
    for(long long int i=0;i<n;i++){
        if(A[i] == 'a' || A[i] == 'e'|| A[i] == 'i'|| A[i] == 'o'|| A[i] == 'u' ||
        A[i] == 'A'|| A[i] == 'E'|| A[i] == 'I'|| A[i] == 'O'|| A[i] == 'U'){
            ans = (ans + (n-i)%10003)%10003;
        }
    }
    return ans;
}
