vector<vector<string> > res;
vector<string> avail_pos; 
void solveNQueensHelper(int A, vector<string> prev, int row){
    if(row>=A){
        res.push_back(prev);
        return;
    }
    for(int j=0;j<A;j++){
        if(avail_pos[row][j] == '1'){
            prev[row][j] = 'Q';
            for(int k=0;k<A;k++){
                avail_pos[row][k] = '0';
                avail_pos[k][j] = '0';
            }
            int cur_row = row;
            int cur_col = j;
            while(cur_row<A && cur_col<A){
                avail_pos[cur_row][cur_col] = '0';
                cur_row++;
                cur_col++;
            }
            cur_row = row;
            cur_col = j;
            while(cur_row>=0 && cur_col>=0){
                avail_pos[cur_row][cur_col] = '0';
                cur_row--;
                cur_col--;
            }
            cur_row = row;
            cur_col = j;
            while(cur_row>=0 && cur_col<A){
                avail_pos[cur_row][cur_col] = '0';
                cur_row--;
                cur_col++;
            }
            cur_row = row;
            cur_col = j;
            while(cur_row<A && cur_col>=0){
                avail_pos[cur_row][cur_col] = '0';
                cur_row++;
                cur_col--;
            }
            solveNQueensHelper(A, prev, row+1);
            prev[row][j] = '.';
            for(int k=0;k<A;k++){
                avail_pos[row][k] = '1';
                avail_pos[k][j] = '1';
            }
            cur_row = row;
            cur_col = j;
            while(cur_row<A && cur_col<A){
                avail_pos[cur_row][cur_col] = '1';
                cur_row++;
                cur_col++;
            }
            cur_row = row;
            cur_col = j;
            while(cur_row>=0 && cur_col>=0){
                avail_pos[cur_row][cur_col] = '1';
                cur_row--;
                cur_col--;
            }
            cur_row = row;
            cur_col = j;
            while(cur_row>=0 && cur_col<A){
                avail_pos[cur_row][cur_col] = '1';
                cur_row--;
                cur_col++;
            }
            cur_row = row;
            cur_col = j;
            while(cur_row<A && cur_col>=0){
                avail_pos[cur_row][cur_col] = '1';
                cur_row++;
                cur_col--;
            }
            
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
    avail_pos.clear();
    string temp;
    string prev_temp;
    vector<string> prev;
    for(int i=0;i<A;i++){
        temp = temp + "1";
        prev_temp = prev_temp + ".";
    }
    for(int i=0;i<A;i++){
        avail_pos.push_back(temp);
        prev.push_back(prev_temp);
    }
    solveNQueensHelper(A, prev, 0);
    return res;
}
