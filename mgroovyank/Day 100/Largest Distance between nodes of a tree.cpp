// https://www.interviewbit.com/problems/largest-distance-between-nodes-of-a-tree/
// Time Complexity: O(N)

vector<vector<int> > graph;
int n;
pair<int, int> bfs(int i){
    vector<int> dis(n ,-1);
    dis[i] = 0;
    queue<int> q;
    q.push(i);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(int j=0;j<graph[curr].size();j++){
            if(dis[graph[curr][j]] == -1){
                dis[graph[curr][j]] = dis[curr] + 1;
                q.push(graph[curr][j]);
            }
        }
    }
    int maxDist = INT_MIN;
    int node;
    for(int j=0;j<n;j++){
        if(maxDist < dis[j]){
            node = j;
            maxDist = dis[j];
        }
    }
    return make_pair(maxDist, node);
}
int Solution::solve(vector<int> &A) {
    graph.clear();
    n = A.size();
    graph.resize(n);
    for(int i=0;i<n;i++){
        if(A[i] != - 1){
            graph[i].push_back(A[i]);
            graph[A[i]].push_back(i);
        }
    }
    pair<int, int> p, q;
    p = bfs(0);
    q = bfs(p.second);
    return q.first;
}
