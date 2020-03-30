// Added code to get the minimum length superstring

#define N 18
int targetMask;
int nonOverlapLen[N+2][N+2];
int dp[N][(1<<N) + 10];
vector<string> sd;
int combineString(vector<string> &words, int a, int b){
    if(a == -1){
        return words[b].size();
    }
    if(nonOverlapLen[a][b] != -1){
        return nonOverlapLen[a][b];
    }
    for(int i=0; i<words[a].size();i++){
        bool suffix = true;
        for(int j=0; j<words[b].size() && i+j<words[a].size() && suffix;j++){
            if(words[a][i+j] != words[b][j]){
                suffix = false;
            } 
        }
        if(suffix){
            int overlap = words[a].size()-i;
            return nonOverlapLen[a][b] = words[b].size() - overlap;
        }
    }
    return nonOverlapLen[a][b] = words[b].size();
}

int findOptimal(vector<string> &words, int last, int mask, string s){
    if(mask == targetMask){
        sd.push_back(s);
        return dp[last+1][mask] = 0;
    }
    if(dp[last + 1][mask] != -1){
        return dp[last+1][mask];
    }
    int ans = INT_MAX;
    for(int i=0;i<words.size();i++){
        if(!((mask>>i)&1)){
            int non_overlap = combineString(words, last, i);
            int overlap = words[i].size() - non_overlap;
            int temp = findOptimal(words, i, mask|(1<<i), s + words[i].substr(overlap)) + non_overlap;
            if(temp < ans){
                ans = temp;
            }
        }
    }
    return dp[last + 1][mask] = ans;
}

int Solution::solve(vector<string>& A){
    int n = A.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j && A[i].find(A[j]) != string::npos){
                A[j] = "";
            } 
        }
    }
    vector<string> newA;
    for(int i=0; i<n; i++){
        if(A[i] != ""){
            newA.push_back(A[i]);
        } 
    }
    
    memset(nonOverlapLen, -1, sizeof(nonOverlapLen));
    memset(dp, -1, sizeof(dp));
    int mask = 0;
    targetMask = (1<<newA.size()) - 1;
    string s = "";
    int ans = findOptimal(newA, -1, mask, s);
    int min_len = INT_MAX;
    int min_idx = -1;
    for(int i=0;i<sd.size();i++){
        int n = sd[i].length();
        if(n < min_len){
            min_idx = i;
            min_len = n;
        }
    }
    cout<<sd[min_idx];
    return ans;
}
