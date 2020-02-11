int Solution::largestRectangleArea(vector<int> &A) {
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
