//  https://www.interviewbit.com/problems/subsets-ii/

vector<vector<int> > res;
void get_SubsetsWithDup(vector<int> A, int idx, vector<int> prev_set){
    int n = A.size();
    for(int i=idx;i<n;){
        prev_set.push_back(A[i]);
        res.push_back(prev_set);
        get_SubsetsWithDup(A, i+1, prev_set);
        prev_set.pop_back();
        while(A[i] == A[i+1]){
            i++;
        }
        i++;
    }
    return;
}
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    vector<int> prev_set;
    res.clear();
    sort(A.begin(), A.end());
    res.push_back(prev_set);
    get_SubsetsWithDup(A, 0, prev_set);
    return res;
}
