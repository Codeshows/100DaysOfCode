// https://www.interviewbit.com/problems/atoi/
// Score: 104/250 
int Solution::atoi(const string A) {
    string ans = "";
    int n = A.length();
    char sign = '+';
    int is_sign = 0;
    long long int s = 0;
    for(long long int i=0;i<n;i++){
        s = ans.length();
        if(A[i] == ' '){
            if(is_sign == 1 && s==0){
                return 0;
            }
            if(s == 0){
                continue;
            }else if(s>0){
                break;
            }
        }
        if(A[i] == '+' || A[i] == '-'){
            if(s == 0){
                sign = A[i];
                is_sign = 1;
                continue;
            }else if(s>0){
                break;
            }
        }
        if(int(A[i])>=48 && int(A[i])<=57){
            ans = ans + A[i];
        }else{
            if(s == 0){
                return 0;
            }
            break;
        }
    }
    long long int answer = 0;
    s = ans.length();
    for(long long int i=0;i<s;i++){
        long long int result = answer*10 + (ans[i] - '0');
        if(result>INT_MAX){
            if(sign == '+'){
                return INT_MAX;
            }else{
                return INT_MIN;
            }
        }
        answer = result;
    }
    if(sign == '-'){
        answer = 0 - answer;
    }
    return answer;
    
}
