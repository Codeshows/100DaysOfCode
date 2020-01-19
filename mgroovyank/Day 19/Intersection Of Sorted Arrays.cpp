//https://www.interviewbit.com/problems/intersection-of-sorted-arrays/

vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> ans;
    int i = 0, j = 0;
    int a = A.size();
    int b = A.size();
    while(i<a && j<b){
        if(A[i] == B[j]){
            ans.push_back(A[i]);
            i++;
            j++;
            continue;
        }
        if(A[i] > B[j]){
            j++;
            continue;
        }
        if(B[j] > A[i]){
            i++;
            continue;
        }
    }
    return ans;
}
