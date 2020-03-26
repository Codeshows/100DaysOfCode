// https://www.interviewbit.com/problems/ways-to-color-a-3xn-board/

long long int MOD = 1e9 + 7;
typedef long long int ll;
int solveHelper(ll A, ll col, vector<vector<ll>> &board){
    if(col == A){
        return 1;
    }
    int ways = 0;
    for(int color=0;color<4;color++){
        if(color == board[0][col-1]){
            continue;
        }
        board[0][col] = color;
        for(int color=0;color<4;color++){
            if(color == board[0][col] || color == board[1][col-1]){
                continue;
            }
            board[1][col] = color;
            for(int color=0;color<4;color++){
                if(color == board[1][col] || color == board[2][col-1]){
                    continue;
                }
                board[2][col] = color;
                ways = (ways + solveHelper(A, col+1, board)%MOD)%MOD;
            }
        }
    }
    return ways;
}
int Solution::solve(int A) {
    if(A == 0){
        return 0;
    }
    int ways = 0;
    vector<vector<ll>> board(3, vector<ll>(A, -1));
    for(int color=0;color<4;color++){
        board[0][0] = color;
        for(int color=0;color<4;color++){
            if(color == board[0][0]){
                continue;
            }
            board[1][0] = color;
            for(int color=0;color<4;color++){
                if(color == board[1][0]){
                    continue;
                }
                board[2][0] = color;
                ways = (ways + solveHelper(A, 1, board)%MOD)%MOD;
            }
        }
    }
    return ways;
}
