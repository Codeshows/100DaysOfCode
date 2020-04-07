// https://www.interviewbit.com/problems/smallest-sequence-with-given-primes/
// Time Complexity: O(NlogN)

vector<int> Solution::solve(int A, int B, int C, int D) {
    vector<int> ans;
    set<int> minHeap;
    minHeap.insert(A);
    minHeap.insert(B);
    minHeap.insert(C);
    for(int i=0;i<D;i++){
        int temp = *(minHeap.begin());
        minHeap.erase(minHeap.begin());
        ans.push_back(temp);
        minHeap.insert(temp * A);
        minHeap.insert(temp * B);
        minHeap.insert(temp * C);
    }
    return ans;
}
