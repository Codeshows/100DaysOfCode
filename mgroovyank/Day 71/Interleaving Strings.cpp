// https://www.interviewbit.com/problems/interleaving-strings/

int InterleaveHelper(string A, string B, string C, int m, int n, int l){
    if(m<0 && n<0 && l<0){
        return 1;
    }
    if(l<0){
        return 0;
    }
    if(m>=0 && n>=0){
        if(A[m] == C[l] && B[n]==C[l]){
        return (InterleaveHelper(A, B, C, m-1, n, l-1) || InterleaveHelper(A,B,C,m,n-1,l-1));
        }
        else if(A[m] == C[l]){
            return InterleaveHelper(A, B, C, m-1, n, l-1);
        }
        else if(B[n]==C[l]){
            return InterleaveHelper(A, B, C, m, n-1, l-1);
        }
        else{
            return 0;
        }
    }else if(m >= 0){
        while(m >= 0){
            if(A[m] == C[l]){
                m--;
                l--;
            }else{
                return 0;
            }
        }
        if(l >= 0){
            return 0;
        }
        return 1;
    }else if(n >= 0){
        while(n >= 0){
            if(B[n] == C[l]){
                n--;
                l--;
            }else{
                return 0;
            }
        }
        if(l >= 0){
            return 0;
        }
        return 1;
    }else{
        return 1;
    }
    return 0;
}
int Solution::isInterleave(string A, string B, string C) {
    int a = A.length();
    int b = B.length();
    int c = C.length();
    if(a+b != c){
        return 0;
    }
    return InterleaveHelper(A, B, C, a-1, b-1, c-1);
}
