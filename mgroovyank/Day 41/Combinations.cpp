// https://www.interviewbit.com/problems/combinations/

vector<vector<int> > res;
void get_combination(int A, int B, int idx, vector<int> comb){
    for(int i=idx;i<=A;i++){
        comb.push_back(i);
        if(comb.size() == B){
            res.push_back(comb);
        }
        get_combination(A, B, i+1, comb);
        comb.pop_back();
    }
    return;
}
vector<vector<int> > Solution::combine(int A, int B) {
    vector<int> comb;
    res.clear();
    get_combination(A, B, 1, comb);
    return res;
}
