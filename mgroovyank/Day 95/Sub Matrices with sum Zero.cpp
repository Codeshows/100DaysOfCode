// https://www.interviewbit.com/problems/sub-matrices-with-sum-zero/
// Time Complexity: O(M*M*N)

int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    if(n == 0){
        return 0;
    }
    int m = A[0].size();
    if(m == 0){
        return 0;
    }
    vector<vector<int> > prefixSum(n, vector<int>(m, 0));
    for(int i=0;i<n; i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            sum = sum + A[i][j];
            prefixSum[i][j] = sum;
        }
    }
    int count = 0;
    for(int col1=0;col1<m;col1++){
        for(int col2=col1;col2<m;col2++){
            unordered_map<int, int> mp;
            int sum = 0;
            for(int row=0;row<n;row++){
                if(col1 == 0 && col2 == 0){
                    sum = sum + prefixSum[row][col1];
                }else{
                    sum = sum + prefixSum[row][col2] - prefixSum[row][col1-1];
                }
                if(sum == 0){
                    count++;
                }
                if(mp.find(sum) != mp.end()){
                    count = count + mp[sum];
                }
                mp[sum]++;
            }
        }
    }
    return count;
}
