// https://www.interviewbit.com/problems/combination-sum-ii/

vector<vector<int> >res;
void get_combinations(vector<int> A, int B, int idx, int sum, vector<int> comb){
    int n = A.size();
    for(int i=idx;i<n;){
        comb.push_back(A[i]);
        sum = sum + A[i];
        if(sum == B){
            res.push_back(comb);
            break;
        }
        if(sum < B){
            get_combinations(A, B, i+1, sum, comb);
            comb.pop_back();
            sum = sum - A[i];
            i++;
            while(i<n && A[i] == A[i-1]){
                i++;
            }
        }else{
            comb.pop_back();
            sum = sum - A[i];
            break;
        }
    }
    return;
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> comb;
    res.clear();
    sort(A.begin(), A.end());
    get_combinations(A, B, 0, 0, comb);
    return res;
    
}
