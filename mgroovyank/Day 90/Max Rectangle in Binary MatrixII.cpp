// https://www.interviewbit.com/problems/max-rectangle-in-binary-matrix/
// Time Complexity: O(N^3)


int Solution::maximalRectangle(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    int max_x[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int cnt = 0;
            for(int col=j;col<m;col++){
                if(A[i][col] == 1){
                    cnt++;
                    continue;
                }
                break;
            }
            max_x[i][j] = cnt;
        }
    }
    int area = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int breadth = max_x[i][j];
            if(breadth == 0){
                continue;
            }
            int height = 1;
            area = max(area, breadth*height);
            int row = i;
            while(row+1<n && max_x[row+1][j]!=0){
                if(breadth >= max_x[row+1][j]){
                    breadth = max_x[row+1][j];
                }
                height++;
                row++;
                area = max(area, breadth*height);
            }
        }
        
    }
    return area;
}
