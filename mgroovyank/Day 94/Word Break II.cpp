// https://www.interviewbit.com/problems/word-break-ii/
// Time Complexity: O()

vector<string> ans;
map<string, int> b;
void wordBreakHelper(string A, int start, int end, string prev){
    if(start>end){
        ans.push_back(prev);
        return;
    }
    for(int i=start;i<=end;i++){
        string temp = A.substr(start, i-start+1);
        if(b.find(temp) == b.end()){
            continue;
        }
        if(prev == ""){
            wordBreakHelper(A, i+1, end, temp);
        }else{
            wordBreakHelper(A, i+1, end, prev + " " + temp);
        }
        
    }
    return;
}
vector<string> Solution::wordBreak(string A, vector<string> &B) {
    ans.clear();
    b.clear();
    string prev = "";
    int n = A.length();
    for(int i=0;i<B.size();i++){
        b.insert(make_pair(B[i], 1));
    }
    wordBreakHelper(A, 0, n-1, prev);
    return ans;
}
