// https://www.interviewbit.com/problems/black-shapes/
// Time Complexity: O(N*M + V)


int n,m;
int set1[4] = {-1, 0, 1, 0};
int set2[4] = {0, 1, 0, -1};
bool isValid(int x, int y){
    if(x<0 || x>=n || y<0 || y>=m){
        return false;
    }
    return true;
}
void dfs(vector<string> &A, int i, int j){
    stack<pair<int, int>> s;
    s.push(make_pair(i, j));
    A[i][j] = '0';
    while(!s.empty()){
        pair<int, int> p = s.top();
        bool found = false;
        for(int k=0;k<4 && !found;k++){
            int x = p.first + set1[k];
            int y = p.second + set2[k];
            if(isValid(x, y) && A[x][y] == 'X'){
                A[x][y] = '0';
                s.push(make_pair(x, y));
                found = true;
            }
        }
        if(!found){
            s.pop();
        }
    }
}
int Solution::black(vector<string> &A) {
    n = A.size();
    m = A[0].length();
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j] == 'X'){
                dfs(A, i, j);
                count++;
            }
        }
    }
    return count;
}
