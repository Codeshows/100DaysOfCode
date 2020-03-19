// https://www.interviewbit.com/problems/tushars-birthday-bombs/

vector<int> Solution::solve(int A, vector<int> &B) {
    vector<int>::iterator ptr = min_element(B.begin(), B.end());
    int min_val = *ptr;
    int min_idx = ptr - B.begin();
    int max_kicks = A / min_val;
    vector<int> ans(max_kicks, min_idx);
    int i = 0; //iterator in B
    int kick = 0;//iterator for ans
    int curr_sum = min_val * max_kicks;
    while(kick<max_kicks && i<min_idx){
        int temp = curr_sum - B[ans[kick]] + B[i];
        if(temp <= A){
            curr_sum = temp;
            ans[kick] = i;
            kick++;
        }else{
            i++;
        }
    }
    return ans;
}
