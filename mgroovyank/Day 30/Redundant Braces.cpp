// https://www.interviewbit.com/problems/redundant-braces/

int Solution::braces(string A) {
    stack<char> s;
    int n = A.length();
    for(int i=0;i<n;i++){
        if(A[i] == ')'){
            s.pop();
            if(s.top() == '('){
                return 1;
            }
            while(s.top()!='('){
                s.pop();
            }
            s.pop();
            if(i+1<n && A[i+1] == ')' && s.top() == '('){
                return 1;
            }
        }else{
            s.push(A[i]);
        }
    }
    return 0;
}
