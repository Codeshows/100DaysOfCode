// https://www.interviewbit.com/problems/generate-all-parentheses/

int Solution::isValid(string A) {
    stack<char> s;
    int n = A.length();
    for(int i=0;i<n;i++){
        if(A[i] == '{' || A[i] == '[' || A[i] == '('){
            s.push(A[i]);
            continue;
        }
        if(s.empty()){ return 0; } 
        if(A[i] == '}'){
            if(s.top() == '{'){
                s.pop();
                continue;
            }
            return 0;
        }else if(A[i] == ']'){
            if(s.top() == '['){
                s.pop();
                continue;
            }
            return 0;
        }else{
            if(s.top() == '('){
                s.pop();
                continue;
            }
            return 0;
        }
    }
    if(s.empty()){ return 1; } 
    return 0;
}
