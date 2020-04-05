// https://www.interviewbit.com/problems/equal-average-partition/
// Time Complexity: O(N ^ 3)

vector<vector<vector<bool> > > dp;
vector<int> res;
bool isPossible(vector<int> &A, int i, int curSum, int curSize){
    if(curSize == 0){
        return (curSum == 0);
    }
    if(i >= A.size()){
        return false;
    }
    if(dp[i][curSum][curSize] != true){
        return dp[i][curSum][curSize];
    }
        
    if(curSum >= A[i]){
        res.push_back(A[i]);
        if(isPossible(A, i+1, curSum - A[i], curSize-1)){
            return true;
        }
        res.pop_back();
    }
    if(isPossible(A, i+1, curSum, curSize)){
        return true;
    }
    return dp[i][curSum][curSize] = false;
    
}
vector<vector<int> > Solution::avgset(vector<int> &A) {
    res.clear();
    dp.clear();
    int totalSize = A.size();
    int totalSum = 0;
    for(int i=0;i<totalSize;i++){
        totalSum += A[i];
    }
    dp.resize(totalSize, vector<vector<bool> >(totalSum+1,vector<bool>(totalSize, true)));
    sort(A.begin(), A.end());
    
    for(int size=1;size<totalSize;size++){
        if((totalSum * size)%totalSize != 0){
            continue;
        }
        int sum1 = (totalSum * size) / totalSize;
        if(isPossible(A, 0, sum1, size)){
            vector<int> sub1 = res;
            vector<int> sub2;
            int i=0, j=0;
            int r= res.size();
            while(i<totalSize || j<r){
                if(j<r && res[j] == A[i]){
                    j++;
                    i++;
                    continue;
                }
                sub2.push_back(A[i++]);
            }
            vector<vector<int>> ans;
            ans.push_back(sub1);
            ans.push_back(sub2);
            return ans;
        }
    }
    vector<vector<int>> ans;
    return ans;
}


