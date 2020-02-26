int fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) {
         res = res * i; 
    }
    return res; 
} 
int nCr(int n, int r) { 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
int Solution::solve(int A) {
    int h = log2(A);
    int l, r;
    int p = A - (2*h-1);
    int m = 2^h;
    if(p>=m/2){
        l = 2*h - 1;
    }
    if(p<m/2){
        l = (2*h)-1-((m/2) - p);
    }
    return nCr(A-1,l) * solve(l) * solve(A-1-l);
    
}
