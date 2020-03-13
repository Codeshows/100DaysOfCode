//https://www.interviewbit.com/problems/regular-expression-match/

int Solution::isMatch(const string A, const string B) {
   int a = A.length();
   int b = B.length();
   vector<int> dp(a+1, 0);
   dp[a] = 1;
   for(int i=b-1;i>=0;i--){
       vector<int> newDp(a+1, 0);
       if(B[i] == '*'){
           newDp[a] = dp[a];
       }
       for(int j=a-1;j>=0;j--){
           if(B[i] == '*'){
               newDp[j] = dp[j] || newDp[j+1] || dp[j+1];
           }else if(B[i] == '?' || B[i] == A[j]){
               newDp[j] = dp[j+1];
           }else{
               newDp[j] = 0;
           }
           
       }
       dp = newDp;
   }
   return dp[0];
}
