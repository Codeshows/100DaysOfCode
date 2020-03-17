// https://www.interviewbit.com/problems/tushars-birthday-bombs/

vector<int> Solution::solve(int A, vector<int> &B) {
    vector<pair<int, int>> newB;
    int prev = INT_MAX;
    int b = B.size();
    for(int i=0;i<b;i++){
        if(B[i]<prev){
            prev = B[i];
            newB.push_back(make_pair(i, B[i]));
        }
    }
    int bi = 0;
    int n = newB.size();
    int mini = newB[n-1].second;
    vector<int> ans;
    while(bi<n){
        if(A >= newB[bi].second && (1+(A-newB[bi].second)/mini) == A/mini){
            ans.push_back(newB[bi].first);
            A = A - newB[bi].second;
        }else{
            bi++;
        }
    }
    return ans;
}
