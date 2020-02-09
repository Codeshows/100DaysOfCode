vector<int> Solution::prevSmaller(vector<int> &A) {
    int n = A.size();
    vector<int> G(n);
    if(n == 0){
        return G;
    }
    stack<int>s;
    int i;
    G[0] = -1;
    s.push(A[0]);
    i=1;
    while(i<n){
        if(A[i] == A[i-1]){
            G[i] = G[i-1];
        }else if(A[i] > A[i-1]){
            G[i] = A[i-1];
        }else{
            while(!s.empty() && s.top() >= A[i]){
                s.pop();
            }
            if(s.empty()){
                G[i] = -1;
            }else{
                G[i] = s.top();
            }
        }
        s.push(A[i]);
        i++;
    }
    return G;
}
