// https://www.interviewbit.com/problems/evaluate-expression-to-true/
// Time Complexity: O(N^K) (Exponential)

long long int MOD = 1e3+3;
int cnttruehelper(string A, int start, int end, bool b){
    if(end<start){
        return 0;
    }
    if(start == end){
        if(A[start] == 'T' && b == true){
            return 1;
        }else if(A[start] == 'T' && b == false){
            return 0;
        }else if(A[start] == 'F' && b == true){
            return 0;
        }else if(A[start] == 'F' && b == false){
            return 1;
        }
    }
    long long int ans = 0;
    for(int i=start;i<=end;i++){
        if(A[i]!= '|' && A[i]!='&' && A[i]!='^'){
            continue;
        }
        if(b){
            if(A[i] == '|'){
                ans = (ans + ((cnttruehelper(A, start, i-1, true)%MOD * cnttruehelper(A, i+1, end, true)%MOD)%MOD + 
                (cnttruehelper(A, start, i-1, true)%MOD * cnttruehelper(A, i+1, end, false)%MOD)%MOD + 
                (cnttruehelper(A, start, i-1, false)%MOD * cnttruehelper(A, i+1, end, true)%MOD)%MOD)%MOD)%MOD;
            }else if(A[i] == '&'){
                ans = (ans + (cnttruehelper(A, start, i-1, true)%MOD * cnttruehelper(A, i+1, end, true)%MOD)%MOD)%MOD;
            }else if(A[i] == '^'){
                ans = (ans + ((cnttruehelper(A, start, i-1, true)%MOD * cnttruehelper(A, i+1, end, false)%MOD)%MOD + 
                (cnttruehelper(A, start, i-1, false)%MOD * cnttruehelper(A, i+1, end, true)%MOD)%MOD)%MOD)%MOD;
            }
        }else{
            if(A[i] == '|'){
                ans = (ans + (cnttruehelper(A, start, i-1, false)%MOD * cnttruehelper(A, i+1, end, false)%MOD)%MOD)%MOD;
            }else if(A[i] == '&'){
                ans = (ans + ((cnttruehelper(A, start, i-1, false)%MOD * cnttruehelper(A, i+1, end, false)%MOD)%MOD)%MOD + 
                (cnttruehelper(A, start, i-1, true)%MOD * cnttruehelper(A, i+1, end, false)%MOD)%MOD + 
                (cnttruehelper(A, start, i-1, false)%MOD * cnttruehelper(A, i+1, end, true)%MOD)%MOD)%MOD;
            }else if(A[i] == '^'){
                ans = (ans + (cnttruehelper(A, start, i-1, true)%MOD * cnttruehelper(A, i+1, end, true)%MOD)%MOD + 
                (cnttruehelper(A, start, i-1, false)%MOD * cnttruehelper(A, i+1, end, false)%MOD)%MOD)%MOD;
            }
        }
    }
    return ans;
}
int Solution::cnttrue(string A) {
    int n = A.length();
    return cnttruehelper(A, 0, n-1, true);
}
