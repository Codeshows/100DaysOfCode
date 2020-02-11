// https://www.interviewbit.com/problems/permutations/
vector<vector<int> > res;
void getPermutations(vector<int> A, vector<int> per){
    int n = A.size();
    if (n == 0){
        res.push_back(per);
    }else{
        for(int i=0;i<n;i++){
            int val = A[i]; 
            per.push_back(val);
            A.erase(A.begin()+i);
            getPermutations(A,per); 
            A.insert(A.begin()+i,val);
            per.pop_back();
        }
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<int> per;
    res.clear();
    getPermutations(A,per);
    return res;
}
