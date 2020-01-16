//https://www.interviewbit.com/problems/add-binary-strings/

string Solution::addBinary(string A, string B) {
    int a = A.length();
    int b = B.length();
    if(a<b){
        for(int i=a;i<b;i++){
            A = '0' + A;
        }
    }else if(b<a){
        for(int i=b;i<a;i++){
            B = '0' + B;
        }
    }
    int carry = 0;
    string res = "";
    a = A.length();
    b = B.length();
    for(int i=a-1;i>=0;i--){
        if(A[i] == '1' && B[i] =='1'){
            if(carry == 0){
                res = '0' + res;
                carry = 1;
                continue;
            }
            res = '1' + res;
            carry = 1;
        }else if(A[i] == '0' && B[i] == '0'){
            if(carry == 0){
                res = '0' + res;
                continue;
            }
            res = '1' + res;
            carry = 0;
        }else{
            if(carry == 0){
                res = '1' + res;
                continue;
            }
            res = '0' + res;
            carry = 1;
        }
    }
    if(carry){
        return ('1' + res);
    }
    return res;
}
