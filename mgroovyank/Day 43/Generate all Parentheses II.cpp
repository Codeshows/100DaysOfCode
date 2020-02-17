// https://www.interviewbit.com/problems/generate-all-parentheses-ii/

vector<string> res;
void generateParenthesisHelper(int A, int open, int closed, string prev){
    int n = prev.length();
    if(2*A == n){
        res.push_back(prev);
        return;
    }
    for(int i=0;i<2;i++){
        if(i == 0 && open){
            prev = prev + "(";
            generateParenthesisHelper(A, open-1, closed, prev);
            prev.pop_back();
        }
        if(i == 1 && open<closed){
            prev = prev + ")";
            generateParenthesisHelper(A, open, closed-1, prev);
            prev.pop_back();
        }
    }
    return;
}
vector<string> Solution::generateParenthesis(int A) {
    res.clear();
    string prev;
    generateParenthesisHelper(A, A, A, prev);
    sort(res.begin(), res.end());
    return res;
}
