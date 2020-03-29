//https://www.interviewbit.com/problems/longest-valid-parentheses/
// Time Complexity: O(N)

int Solution::longestValidParentheses(string A) {
    int n = A.length();
    vector<int> v(n, 0);
    int ans = 0;
    for(int i=0;i<n;i++){
        if(A[i] == '('){
            v[i] = 0;
         }else{
            if(i-1>=0 && A[i-1] == '('){
                if(i-2>=0){
                    v[i] = v[i-2] + 2;
                }else{
                    v[i] = 2;
                }
            }else if(i-1>=0 && (i-v[i-1]-1)>=0 && A[i-1] == ')' && A[i-v[i-1]-1] == '('){
                if(i - v[i-1] - 2 >=0){
                    v[i] = v[i-1] + 2 + v[i-v[i-1]-2];
                }else{
                    v[i] = v[i-1] + 2 ;
                }
            } 
        }
    }
    return *max_element(v.begin(), v.end());
}
