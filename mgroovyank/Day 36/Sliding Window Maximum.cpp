vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int n = A.size();
    deque<int> dq(B);
    vector<int> ans;
    int i = 0;
    while(i<B){
        while(!dq.empty() && A[i]>A[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i++);
    }
    while(i<n){
        ans.push_back(A[dq.front()]);
        while(!dq.empty() && dq.front()<=i-B){
            dq.pop_front();
        }
        while(!dq.empty() && A[i]>A[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i++);
    }
    ans.push_back(A[dq.front()]);
    return ans;
}
