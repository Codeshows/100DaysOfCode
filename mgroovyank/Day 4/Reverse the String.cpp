// https://www.interviewbit.com/problems/reverse-the-string/

string Solution::solve(string A) {
    int n = A.length();
    int i = 0;
    int j = n-1;
    while(i<n && A[i] == ' '){
        i++;
    } 
    if(i == n){
        return A;
    }
    while(j>=0 && A[j] == ' '){
        j--;
    }
    string ans = "";
    while(j>=i){
        string word = "";
        while(j>=i && A[j] != ' '){
            word = A[j] + word;
            j--;
        }
        if(ans.length() == 0){
            ans = ans + word;
        }else{
            ans = ans + ' ' + word;
        }
        while(j>=i && A[j] == ' '){
            j--;
        }
    }
    return ans;
}
