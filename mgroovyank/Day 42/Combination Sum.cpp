// https://www.interviewbit.com/problems/combination-sum/


vector<vector<int> > res;
void get_combinations(vector<int> A, int B, int idx, int sum, vector<int> comb){
    int n = A.size();
    for(int i = idx;i<n;i++){
        comb.push_back(A[i]);
        sum = sum + A[i];
        if(sum == B){
            res.push_back(comb);
            break;
        }
        if(sum < B){
            get_combinations(A, B, i, sum, comb);
            comb.pop_back();
            sum = sum - A[i];
        }else{
            comb.pop_back();
            sum = sum - A[i];
            break;
        }
    }
    return;
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<int> comb;
    res.clear();
    sort(A.begin(), A.end());
    vector<int>::iterator p = unique(A.begin(), A.end());
    A.resize(distance(A.begin(), p)); 
    get_combinations(A, B, 0, 0, comb);
    return res;
}
