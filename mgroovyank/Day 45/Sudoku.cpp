// https://www.interviewbit.com/problems/sudoku/


bool findEmptyPos(vector<vector<char>> &A, int &row, int &col){
    for(row=0; row<9; row++){
        for(col=0; col<9; col++){
            if(A[row][col] == '.'){
                return true;
            }
        }
    }
    return false;
}
vector<int> validNumbers(vector<vector<char> > &A, int crow, int ccol){
    vector<int> validNum(10, 1);
    validNum[0] = 0;
    for(int row=0;row<9;row++){
        if(A[row][ccol]!='.'){
            validNum[A[row][ccol]-'0'] = 0;
        }
    }
    for(int col=0;col<9;col++){
        if(A[crow][col]!='.'){
            validNum[A[crow][col]-'0'] = 0;
        }
    }
    int start_row_box = 3 * (crow/3);
    int start_col_box = 3 * (ccol/3);
    for(int row=start_row_box;row<start_row_box+3;row++){
        for(int col=start_col_box;col<start_col_box+3;col++){
            if(A[row][col]!='.'){
                validNum[A[row][col]-'0'] = 0;
            }
        }
    }
    return validNum;
}
bool solveSudokuHelper(vector<vector<char>> &A){
    int row, col;
    if(findEmptyPos(A, row, col)==false){
        return true;
    }
    vector<int> validNum = validNumbers(A, row, col);
    for(int i=1; i<=9; i++){
        if(validNum[i]){
            A[row][col] = i+'0';
            if(solveSudokuHelper(A)==true){
                return true;
            }
            A[row][col] = '.';
        }
    }
    return false;
}
void Solution::solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    solveSudokuHelper(A);
}
