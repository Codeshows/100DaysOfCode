// https://www.interviewbit.com/problems/queen-attack/
// Time Complexity: O(M*N*8)

vector<vector<int> > dp[8];
bool valid(int i, int j, int n, int m){
    if(i < 0 or i >= n or j < 0 or j >= m){
        return false;
    }
    return true;
}
int dir1[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dir2[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int queenAttackHelper(vector<string> & A, int i, int j, int k){
    int n = A.size();
    int m = A[0].size();
    if(dp[k][i][j] != -1){
        return dp[k][i][j];
    }
    int ans = 0;
    int x = i + dir1[k];
    int y = j + dir2[k];
    if(valid(x, y, n, m)){
        if(A[x][y] == '1'){
            ans++;
        }else{
            ans +=  queenAttackHelper(A,x, y, k);
        }
    }
    return dp[k][i][j] = ans;
}

vector<vector<int> > Solution::queenAttack(vector<string> &A) {
    int n = A.size();
    int m = A[0].size();
    for(int i = 0; i < 8; i++){
        dp[i].clear();
        dp[i].resize(n, vector<int>(m, -1));
    }
    vector< vector<int> > ans(n, vector<int>(m, 0));
    for(int k = 0; k < 8; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ans[i][j] += queenAttackHelper(A, i, j, k);
            }
        }
    }
    return ans;
}

