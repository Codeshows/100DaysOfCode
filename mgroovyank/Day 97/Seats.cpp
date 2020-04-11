// https://www.interviewbit.com/problems/seats/
// Time Complexity: O(N)

#define MOD 10000003
int Solution::seats(string A) {
    long long int n = A.length();
    vector<long long int> points;
    for(long long int i=0;i<n;i++){
        if(A[i] == 'x'){
            points.push_back(i);
        }
    }
    long long int l = points.size();
    long long int median = -1;
    median = (l+1)/2 - 1;
    long long int ans = 0;
    for(long long int i=0;i<l;i++){
        ans = (ans + (abs(points[i] - points[median]) - abs(i-median))%MOD)%MOD;
    }
    return ans;
}
