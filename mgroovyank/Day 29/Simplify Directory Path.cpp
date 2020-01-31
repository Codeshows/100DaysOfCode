// https://www.interviewbit.com/problems/simplify-directory-path/
string Solution::simplifyPath(string A) {
    int n = A.size();
    stack<string> path;
    int i = 0;
    while(i<n){
        string temp = "";
        while(i<n && A[i]!='/'){
            temp += A[i++];
        }
        if(temp == "."){
            continue;
        }
        if(temp == ".."){
            if(!path.empty()){
                path.pop();
            }
        }else if(temp != ""){
            path.push(temp);
        }
        i++;
    }
    if(path.empty()){
        return "/";
    }
    string ans;
    while(!path.empty()){
        string temp = path.top();
        path.pop();
        reverse(temp.begin(), temp.end());
        ans += temp;
        ans += "/";
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
