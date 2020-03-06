//https://www.interviewbit.com/problems/distinct-numbers-in-window/

vector<int> Solution::dNums(vector<int> &A, int B) {
    int n = A.size();
    vector<int> ans;
    if(B>n){
        return ans;
    }
    map<int, int> hash;
    int i,j;
    j=0;
    int c = 0;
    while(j<B){
        hash[A[j]]++;
        if(hash[A[j]] == 1){
            c++;
        }
        j++;
    }
    ans.push_back(c);
    for(i=0;i<=n-B && j<n;i++){
        hash[A[i]]--;
        if(hash[A[i]] == 0){
            c--;
        }
        hash[A[j]]++;
        if(hash[A[j]] == 1){
            c++;
        }
        ans.push_back(c);
        j++;
    }
    return ans;
}
