// https://www.interviewbit.com/problems/capture-regions-on-board/
// Time Complexity: O(V + E)


int n,m;
int set1[4] = {-1, 0, 1, 0};
int set2[4] = {0, 1, 0, -1};
bool isValid(int x, int y){
    if(x<0 || x>=n || y<0 || y>=m){
        return false;
    }
    return true;
}
void dfs(vector<vector<char> > &A, int i, int j){
    stack<pair<int, int>> s;
    s.push(make_pair(i, j));
    A[i][j] = '-';
    while(!s.empty()){
        pair<int, int> p = s.top();
        bool found = false;
        for(int k=0;k<4 && !found;k++){
            int x = p.first + set1[k];
            int y = p.second + set2[k];
            if(isValid(x, y) && A[x][y] == 'O'){
                A[x][y] = '-';
                s.push(make_pair(x, y));
                found = true;
            }
        }
        if(!found){
            s.pop();
        }
    }
}
void Solution::solve(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    n = A.size();
    m = A[0].size();
    for(int j=0;j<m;j++){
        if(A[0][j] == 'O'){
            dfs(A, 0, j);
        }
    }
    for(int j=0;j<m;j++){
        if(A[n-1][j] == 'O'){
            dfs(A, n-1, j);
        }
    }
    for(int i=1;i<n-1;i++){
        if(A[i][0] == 'O'){
            dfs(A, i, 0);
        }
    }
    for(int i=1;i<n-1;i++){
        if(A[i][m-1] == 'O'){
            dfs(A, i, m-1);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j] == '-'){
                A[i][j] = 'O';
            }else{
                A[i][j] = 'X';
            }
        }
    }
}
