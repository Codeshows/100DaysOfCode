//https://www.interviewbit.com/problems/largest-area-of-rectangle-with-permutations/


int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    vector<int> temp(m, 0);
    vector<vector<int> > cnt(n, temp);
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j] == 0){
                cnt[i][j] = 0;
            }else if(i>0){
                cnt[i][j] = cnt[i-1][j] + 1;
            }else{
                cnt[i][j] = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        vector<int> cntsort(n+1, 0);
        int count = 0;
        for(int j=0; j<m; j++){ 
			cntsort[cnt[i][j]]++;
		}
		for(int j=n;j>=0;j--){
			count += cntsort[j];
			ans = max(ans, count*j);
		}
    }
    return ans;
}
