//https://www.interviewbit.com/problems/length-of-last-word/

int Solution::lengthOfLastWord(const string A){
    int n = A.length();
    int i = n-1;
    while(i>=0 && A[i] == ' '){
        i--;
    }
    if(i == -1){
        return 0;
    }
    int ans = 0;
    while(i>=0 && A[i] != ' '){
        ans++;
        i--;
    }
    return ans;
}
