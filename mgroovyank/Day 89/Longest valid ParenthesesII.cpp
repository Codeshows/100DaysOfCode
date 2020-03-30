// https://www.interviewbit.com/problems/longest-valid-parentheses/
// Time Complexity: O(N)
// Space Complexity: O(N)

int Solution::longestValidParentheses(string A) {
    int n = A.size();
    stack<int> st;
    st.push(-1);
    int ans = 0;
    for(int i=0;i<n;i++){
        if(A[i] == '('){
            st.push(i);
        }else{
            st.pop();
            if(st.empty()){
                st.push(i);
            }else{
                ans = max(ans, i-st.top());
            }
        }
    }
    return ans;
}
