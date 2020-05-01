// https://www.interviewbit.com/problems/smallest-multiple-with-0-and-1/
// Time Complexity: O(N)

string Solution::multiple(int A) {
    if(A == 1){
        return "1";
    }
    vector<int> prev(A, -1);
    vector<int> step(A, -1);
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(curr == 0){
            break;
        }
        for(int i=0;i<=1;i++){
            int next = (curr * 10 + i)%A;
            if(prev[next] == -1){
                prev[next] = curr;
                step[next] = i;
                q.push(next);
            }
        }
        
    }
    string ans;
    for(int state=0;state!=1;state = prev[state]){
        ans = ans +  to_string(step[state]);
    }
    ans = ans + "1";
    reverse(ans.begin(), ans.end());
    return ans;
}
