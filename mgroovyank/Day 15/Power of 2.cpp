//https://www.interviewbit.com/problems/power-of-2/
int Solution::power(string A) {
    if(A == "1"){
        return 0;
    }
    while(A!="1"){
        int n = A.length();
        if((A[n-1] - '0')%2 != 0){
            return 0;
        }
        int i = 0;
        int divisor = 2;
        int dividend = A[i] - '0';
        while(divisor>dividend){
            dividend = dividend*10 + (A[++i] - '0');
        }
        string ans;
        while(i < n){
            ans += ((dividend/divisor) + '0');
            dividend = (dividend%divisor)*10 + (A[++i] - '0');
        }
        A = ans;
    }
    return 1;
}
