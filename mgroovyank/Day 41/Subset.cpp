// https://www.interviewbit.com/problems/subset/

vector<vector<int> > res;
void get_subsets(vector<int> A, vector<int> prev_set, int index){
    int n =A.size();
    for(int i=index;i<n;i++){
        prev_set.push_back(A[i]);
        res.push_back(prev_set);
        int ai = A[i];
        get_subsets(A, prev_set, i+1);
        prev_set.pop_back();
    }
    return;
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<int> prev_set(0);
    res.clear();
    sort(A.begin(), A.end());
    res.push_back(prev_set);
    get_subsets(A, prev_set, 0);
    return res;
}
