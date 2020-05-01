// https://www.interviewbit.com/problems/valid-path/
// Time Complexity: O(N^2)

// DFS Approach 

bool isValid(int A, int B, int C, int D){
    if(A>C || B>D || A<0 || B<0){
        return 0;
    }
    return 1;
}
int possible_x[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int possible_y[8] = {0, 1, 1, 1, 0, -1, -1, -1};
bool solveHelper(int A, int B, int C, int D, vector<vector<int> > &grid){
    if(A == C && B == D && grid[A][B] == 1){
        return 1;
    }
    if(!isValid(A, B, C, D)){
        return 0;
    }
    if(grid[A][B] == 0){
        return 0;
    }
    grid[A][B] = 0;
    int ans = 0;
    for(int i=0;i<8;i++){
        ans |= solveHelper(A+possible_x[i], B+possible_y[i], C, D, grid);
        if(ans == 1){
            return ans;
        }
    }
    return ans;
}
string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {
    vector<vector<int> > grid(A + 1, vector(B + 1, 1));
    for(int i=0;i<=A;i++){
        for(int j=0;j<=B;j++){
            for(int k=0;k<C;k++){
                int distance_square = pow((i-E[k]), 2) +  pow((j-F[k]), 2);
                if(distance_square <= D*D){
                    grid[i][j] = 0;
                    break;
                }
            }
        }
    }
    if(solveHelper(0, 0 ,A, B, grid)){
        return "YES";
    }
    return "NO";
}
