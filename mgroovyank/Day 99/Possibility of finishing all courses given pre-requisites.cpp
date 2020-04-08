// https://www.interviewbit.com/problems/possibility-of-finishing-all-courses-given-prerequisites/
// Time Complexity: O(A + B)

vector<vector<int> > graph;
vector<bool> dfs_stack;
vector<bool> visited;
bool cycle;
void dfs(int node){
    visited[node] = true;
    dfs_stack[node] = true;
    for(int next=0;next<graph[node].size();next++){
        if(visited[graph[node][next]]){
            if(dfs_stack[graph[node][next]]){
                cycle = true;
            }
        }else{
            dfs(graph[node][next]);
        }
    }
    dfs_stack[node] = false;
}
int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    graph.clear();
    dfs_stack.clear();
    visited.clear();
    graph.resize(A+1);
    dfs_stack.assign(A+1, false);
    visited.assign(A+1, false);
    int edges = B.size();
    for(int i=0;i<edges;i++){
        graph[B[i]].push_back(C[i]);
    }
    cycle = false;
    for(int i=1;i<=A;i++){
        if(!visited[i]){
            dfs(i);
        }
        if(cycle){
            return 0;
        }
    }
    return 1;
}
