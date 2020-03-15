//https://www.interviewbit.com/problems/scramble-string/

int Solution::isScramble(const string A, const string B) {
    int a = A.length();
    int b = B.length();
    if(a == 0 && b == 0){
        return 1;
    }
    if(a!=b){
        return 0;
    }
    if(A == B){
        return 1;
    }
    for(int i=1;i<a;i++){
        string left = A.substr(0, i);
        string right = B.substr(i, a);
        if(isScramble(left, B.substr(b-i, b)) && isScramble(right, B.substr(0, b-i))){
            return true;
        }
        if(isScramble(left, B.substr(0, i)) && isScramble(right, B.substr(i, b))){
            return true;
        }
    }
    return false;
}
