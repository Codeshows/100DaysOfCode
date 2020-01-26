//https://www.interviewbit.com/problems/3-sum-zero/
vector<vector<int> > Solution::threeSum(vector<int> &A) {
    int n = A.size();
    sort(A.begin(), A.end());
    vector<vector<int> >ans;
    for(int i=0;i<n-2;i++){
        int j=i+1,k=n-1;
        while(j<k){
            if(A[i] + A[j] + A[k] == 0){
                vector<int> temp;
                temp.push_back(A[i]);
                temp.push_back(A[j]);
                temp.push_back(A[k]);
                ans.push_back(temp);
                while(A[k-1] == A[k]){
                    k--;
                }
                k--;
                while(A[j+1] == A[j]){
                    j++;
                }
                j++;
                while(A[i+1] == A[i]){
                    i++;
                }
            }else if(A[i]+A[j]+A[k]>0){
                k--;
            }else{
                j++;
            }
        }
    }
    return ans;
}
