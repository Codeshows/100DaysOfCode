// https://www.interviewbit.com/problems/letter-phone/

vector<string> res;
vector<string> mapy(10);
void get_letterCombinations(string A, int idx, string prev_comb){
    int n = A.length();
    if(idx>=n){
        res.push_back(prev_comb);
        return;
    }
    for(int i = 0;i<mapy[A[idx]-'0'].length();i++){
        prev_comb = prev_comb+mapy[A[idx]-'0'][i];
        get_letterCombinations(A, idx+1, prev_comb);
        prev_comb.pop_back();
    }
    return;
}
vector<string> Solution::letterCombinations(string A) {
    mapy[0] = "0";
    mapy[1] = "1";
    mapy[2] = "abc";
    mapy[3] = "def";
    mapy[4] = "ghi";
    mapy[5] = "jkl";
    mapy[6] = "mno";
    mapy[7] = "pqrs";
    mapy[8] = "tuv";
    mapy[9] = "wxyz";
    string prev_comb;
    res.clear();
    get_letterCombinations(A, 0, prev_comb);
    sort(res.begin(), res.end());
    return res;
}
