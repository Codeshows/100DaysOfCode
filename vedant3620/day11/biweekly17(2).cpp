class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int> > v( m , vector<int> (n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x=0;
                for(int r=max(0,i-K);r<min(m,i+K+1);r++){
                    for(int c=max(0,j-K);c<min(n,j+K+1);c++){
                        x+=mat[r][c];
                    }
                }
                v[i][j]=x;
            }
        }
        return v;
    }
};
