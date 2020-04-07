// https://www.interviewbit.com/problems/valid-path/
// Time Complexity: O(N^2)

// BFS Approach

bool isValid(int A, int B, int C, int D){
    if(A>C || B>D || A<0 || B<0){
        return 0;
    }
    return 1;
}
int possible_x[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int possible_y[8] = {0, 1, 1, 1, 0, -1, -1, -1};
string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {
    vector<vector<int> > visited(A + 1, vector(B + 1, 0));
    for(int i=0;i<=A;i++){
        for(int j=0;j<=B;j++){
            for(int k=0;k<C;k++){
                int distance_square = pow((i-E[k]), 2) +  pow((j-F[k]), 2);
                if(distance_square <= D*D){
                    visited[i][j] = 1;
                    break;
                }
            }
        }
    }
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    visited[0][0] = 1;
    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        if(x == A && y == B){
            return "YES";
        }
        for(int i=0;i<8;i++){
            int next_x = x + possible_x[i];
            int next_y = y + possible_y[i];
            if(isValid(next_x, next_y, A, B) && !visited[next_x][next_y]){
                q.push(make_pair(next_x, next_y));
                visited[next_x][next_y] = 1;

            }
        }
    }
    return "NO";
}
