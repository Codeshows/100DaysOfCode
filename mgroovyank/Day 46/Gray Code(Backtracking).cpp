// https://www.interviewbit.com/problems/gray-code/
vector<int> res;
void getGrayCode(int A, int prevNum){
    for(int i=A-1;i>=0;i--){
        int num = prevNum^(1<<i);
        if(find(res.begin(), res.end(), num)!=res.end()){
            continue;
        }
        res.push_back(num);
        getGrayCode(A, num);
    }
    return;
}
vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    res.clear();
    getGrayCode(A, 0);
    return res;
}
