//https://www.interviewbit.com/problems/nqueens/


vector<vector<string> > res;
void solveNQueensHelper(int A, vector<string> prev, int row, vector<string> avail_pos){
    if(row>=A){
        res.push_back(prev);
        return;
    }
    for(int j=0;j<A;j++){
        if(avail_pos[row][j] == '1'){
            prev[row][j] = 'Q';
            vector<string> cur_avail_pos;
            cur_avail_pos = avail_pos;
            for(int k=0;k<A;k++){
                cur_avail_pos[row][k] = '0';
                cur_avail_pos[k][j] = '0';
            }
            int cur_row = row;
            int cur_col = j;
            while(cur_row<A && cur_col<A){
                cur_avail_pos[cur_row][cur_col] = '0';
                cur_row++;
                cur_col++;
            }
            cur_row = row;
            cur_col = j;
            while(cur_row>=0 && cur_col>=0){
                cur_avail_pos[cur_row][cur_col] = '0';
                cur_row--;
                cur_col--;
            }
            cur_row = row;
            cur_col = j;
            while(cur_row>=0 && cur_col<A){
                cur_avail_pos[cur_row][cur_col] = '0';
                cur_row--;
                cur_col++;
            }
            cur_row = row;
            cur_col = j;
            while(cur_row<A && cur_col>=0){
                cur_avail_pos[cur_row][cur_col] = '0';
                cur_row++;
                cur_col--;
            }
            solveNQueensHelper(A, prev, row+1, cur_avail_pos);
            prev[row][j] = '.';
        }
    }
    return;
}
vector<vector<string> > Solution::solveNQueens(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    res.clear();
    string temp;
    string prev_temp;
    vector<string> avail_pos; 
    vector<string> prev;
    for(int i=0;i<A;i++){
        temp = temp + "1";
        prev_temp = prev_temp + ".";
    }
    for(int i=0;i<A;i++){
        avail_pos.push_back(temp);
        prev.push_back(prev_temp);
    }
    solveNQueensHelper(A, prev, 0, avail_pos);
    return res;
}
