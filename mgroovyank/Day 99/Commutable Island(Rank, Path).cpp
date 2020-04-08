// https://www.interviewbit.com/problems/commutable-islands/
// Time Complexity: O(MlogM + M*logA)

vector<pair<int, int> > par_rank; // first is parent, second is rank 
bool comparator(vector<int> a, vector<int> b){
    return a[2]<b[2];
}
void Union(int par_x, int par_y){
    int rank_x = par_rank[par_x].second;
    int rank_y = par_rank[par_y].second;
    if(rank_x < rank_y){
        par_rank[par_x].first = par_y;
    }else if(rank_x > rank_y){
        par_rank[par_y].first = par_x;
    }else{
        par_rank[par_x].first = par_y;
        par_rank[par_y].second++;
    }
}
int findParent(int x){
    if(par_rank[x].first == -1){
        return x;
    }
    return par_rank[x].first = findParent(par_rank[x].first);
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
    par_rank.clear();
    int m = B.size();
    sort(B.begin(), B.end(), comparator);
    par_rank.assign(A+1, make_pair(-1, 0));
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
