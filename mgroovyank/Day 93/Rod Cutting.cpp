// https://www.interviewbit.com/problems/rod-cutting/
// Time Complexity: 

typedef long long int LL;
vector<int> ans;
vector<vector<LL> > dp;
vector<vector<int> > best_idx;
LL rodCutHelper(int l, int r, vector<int> &B){
    if(l + 1 >= r){
        return 0;
    }
    if(dp[l][r] != -1){
        return dp[l][r];
    }
    dp[l][r] = LLONG_MAX;
    int bestind;
    for(int i=l+1;i<r;i++){
        LL temp = rodCutHelper(l, i, B) + rodCutHelper(i, r, B) + (LL)B[r]-(LL)B[l];
        if(temp < dp[l][r]){
            dp[l][r] = temp;
            bestind = i;
        }
    }
    best_idx[l][r] = bestind;
    return dp[l][r];
}


void back(int l, int r, vector<int> &B){
    if(l + 1 >= r){
        return;
    }
    ans.push_back(B[best_idx[l][r]]);
    back(l, best_idx[l][r], B);
    back(best_idx[l][r], r, B);
}

vector<int> Solution::rodCut(int A, vector<int> &B) {
    ans.clear();
    B.push_back(A);
    B.insert(B.begin(),0);
    int n = B.size();
    dp.assign(n, vector<LL>(n, -1));
    best_idx.assign(n, vector<int>(n, -1));
    LL best = rodCutHelper(0, n - 1, B);
    back(0, n - 1, B);
    return ans;
}

