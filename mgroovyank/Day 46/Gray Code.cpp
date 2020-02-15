// https://www.interviewbit.com/problems/gray-code/
vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<int> res;
    res.push_back(0);
    for(int g=0;g<A;g++){
        int res_size = res.size();
        for(int r=res_size-1;r>=0;r--){
            res.push_back(res[r] + (1<<g));
        }
    }
    return res;
}
