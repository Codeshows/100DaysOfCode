// https://www.interviewbit.com/problems/longest-valid-parentheses/
// Time Complexity: O(N)
// Space Complexity: O(1)

int Solution::longestValidParentheses(string A) {
    int n = A.size();
    int curr_start = 0;
    int count = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(A[i] == '('){
            count++;
        }else if(count > 0){
            count--;
            if(count == 0){
                ans = max(ans, i-curr_start+1);
            }
        }else{
            curr_start = i+1;
        }
    }
    curr_start = n-1;
    count = 0;
    for(int i=n-1;i>=0;i--){
        if(A[i] == ')'){
            count++;
        }else if(count>0){
            count--;
            if(count == 0){
                ans = max(ans, curr_start-i+1);
            }
        }else{
            curr_start = i - 1;
        }
    }
    return ans;
}
