// https://www.interviewbit.com/problems/commutable-islands/
// Time Complexity: O(MLogM + M*A) (sorting + Union -Find)


vector<int> parent;
bool comparator(vector<int> a, vector<int> b){
    return a[2]<b[2];
}
void Union(int par_x, int par_y){
    parent[par_x] = par_y;
    return;
}
int findParent(int x){
    if(parent[x] == -1){
        return x;
    }
    return findParent(parent[x]);
}
bool detectCycle(int x, int y){
    int par_x = findParent(x);
    int par_y = findParent(y);
    if(par_x == par_y){
        return true;
    }
    Union(par_x, par_y);
    return false;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    parent.clear();
    int m = B.size();
    sort(B.begin(), B.end(), comparator);
    parent.assign(A+1, -1);
    int ans = 0;
    for(int i=0;i<m;i++){
        int x = B[i][0];
        int y = B[i][1];
        if(!detectCycle(x, y)){
            ans = ans + B[i][2];
        }
    }
    return ans;
}
