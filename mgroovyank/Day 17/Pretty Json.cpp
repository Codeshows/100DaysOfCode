//https://www.interviewbit.com/problems/pretty-json/

vector<string> Solution::prettyJSON(string A) {
    vector<string> ans;
    if(A.length() == 0){
        return ans;
    }
    A.erase(remove(A.begin(), A.end(), ' '), A.end());
    int i=0;
    int n = A.length();
    int open = 0;
    while(i<n){
        string tmp;
        if(A[i] == '{' || A[i] == '['){
          if(i-1>=0 && A[i-1] == ':'){
            tmp = tmp + '\n';
          }
          tmp += string(open, '\t');
          tmp = tmp + A[i];
            ans.push_back(tmp);
            open++;
            i++;
            continue;
        }else if(A[i] == '}' || A[i] == ']'){
            open--;
            tmp += "\n";
            tmp += string(open ,'\t');
            ans.push_back(tmp + A[i]);
            i++;
            continue;
        }
        while(i<n && A[i] != '{' && A[i] != ',' && A[i] != '[' && A[i] != '}' && A[i] != ']'){
            tmp += A[i];
            i++;
        }
        if(A[i] == ','){
            tmp = tmp + A[i];
            i++;
        }
        ans.push_back('\n' + string(open, '\t') + tmp);
    }
    return ans;
}
