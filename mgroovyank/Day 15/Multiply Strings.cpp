//https://www.interviewbit.com/problems/multiply-strings/
string Solution::multiply(string A, string B) {
    if(A == "0" || B == "0"){
        return "0";
    }
    string ans;
    int a = A.length();
    int b = B.length();
    int ia=0, ib;
    vector<int> res(a+b, 0);
    for(int i=a-1;i>=0;i--){
        ib = 0;
        int carry = 0;
        for(int j=b-1;j>=0;j--){
            int temp = (A[i] - '0')*(B[j] - '0') +  res[ia + ib] + carry;
            carry = temp/10;
            res[ia+ib] = temp%10;
            ib++;
        }
        if(carry>0){
            res[ia+ib] +=carry;
        }
        ia++;
    }
    int i = a+b-1;
    while(res[i]==0){
        i--;
    }
    while(i>=0){
        ans += (res[i] + '0');
        i--;
    }
    return ans;
}
