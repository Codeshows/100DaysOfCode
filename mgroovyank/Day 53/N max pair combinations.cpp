// https://www.interviewbit.com/problems/n-max-pair-combinations/


vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    vector<int> ans;
    priority_queue<pair<int, pair<int, int> > > max_heap;
    map<pair<int, int>, int> hash;
    int n = A.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int i,j,k;
    i = n-1;
    j = n-1;
    max_heap.push(make_pair(A[i] + B[j], make_pair(i, j)));
    hash.insert(make_pair(make_pair(i,j), 1));
    k = 0;
    while(k<n){
        pair<int, pair<int, int> > curr_max = max_heap.top();
        max_heap.pop();
        ans.push_back(curr_max.first);
        pair<int, int> p = make_pair(curr_max.second.first-1, curr_max.second.second);
        if(hash[p] == 0){
            max_heap.push(make_pair(A[p.first]+B[p.second], p));
            hash[p] = 1;
        }
        p = make_pair(curr_max.second.first, curr_max.second.second-1);
        if(hash[p] == 0){
            max_heap.push(make_pair(A[p.first]+B[p.second], p));
            hash[p] = 1;
        }
        k++;
    }
    return ans;
}
