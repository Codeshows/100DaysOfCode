// https://www.interviewbit.com/problems/max-rectangle-in-binary-matrix/
// Time Complexity: O(N^2)
int largestRectangleArea(vector<int> &A) {
    int n = A.size();
    stack<int> s;
    int i;
    int maxRect = 0;
    for(i=0;i<n;){
        if(s.empty() || A[i]>=A[s.top()]){
            s.push(i++);
        }else{
            int h = A[s.top()];
            s.pop();
            maxRect = max(maxRect, h*(s.empty()?i:i-s.top()-1));
        }
    }
    while(!s.empty()){
        int h = A[s.top()];
        s.pop();
        maxRect = max(maxRect, h*(s.empty()?i:i-s.top()-1));
    }
    return maxRect;
}
int Solution::maximalRectangle(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    vector<int> hist(m, 0);
    int area = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j] == 0){
                hist[j] = 0;
            }else{
                hist[j]++;
            }
        }
        area = max(area, largestRectangleArea(hist));
    }
    return area;
}
