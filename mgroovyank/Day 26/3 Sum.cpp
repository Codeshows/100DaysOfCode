// 
int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int ans = 1000000000, sum = 0;//Don't take INT_MAX as it might overflow
    int n = A.size();
    for (int i = 0; i <n - 2; i++) {
        int ptr1 = i + 1, ptr2 = n - 1;
        while (ptr1 < ptr2) {
            sum = A[i] + A[ptr1] + A[ptr2];
            if(abs(B - sum) < abs(B - ans)) {//here overflow can occur
                ans = sum;
            }
            if(sum > B) {
                ptr2--;
            }else{
                ptr1++;
            }
        }
    }
    return ans;
}
