vector<int> Solution::prevSmaller(vector<int> &A) {
    int n = A.size();
    vector<int> G(n);
    vector<int> Gi(n);
    if(n == 0){
        return G;
    }
    int i,j;
    G[0] = -1;
    Gi[0] = -1;
    i=1;
    j=0;
    while(i<n){
        if(A[i] == A[i-1]){
            G[i] = G[i-1];
            Gi[i] = Gi[i-1];
        }else if(A[i] > A[i-1]){
            G[i] = A[i-1];
            Gi[i] = i-1;
        }else{
            j = Gi[i-1];
            while(j>=0 && A[j] >= A[i]){
                j--;
            }
            if(j<0){
                G[i] = -1;
                Gi[i] = -1;
            }else{
                G[i] = A[j];
                Gi[i] = j;
            }
        }
        i++;
    }
    return G;
}
