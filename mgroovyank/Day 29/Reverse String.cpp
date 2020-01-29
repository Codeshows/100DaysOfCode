//https://www.interviewbit.com/problems/reverse-string/
string Solution::reverseString(string A) {
    string ans;
    stack<char> s;
    int n = A.length();
    for(int i=0;i<n;i++){
        s.push(A[i]);
    }
    while(!s.empty()){
        ans = ans + s.top();
        s.pop();
    }
    return ans;
}
