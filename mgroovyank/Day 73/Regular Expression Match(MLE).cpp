// https://www.interviewbit.com/problems/regular-expression-match/

int Solution::isMatch(const string A, const string B) {
   int a = A.length();
   int b = B.length();
   vector<int> temp(a+1, 0);
   vector<vector<int> > dp(b+1 ,temp);
   dp[0][0] = 1;
   for(int i=1;i<b+1;i++){
       if(B[i-1] == '*'){
           dp[i][0] = dp[i-1][0];
       }
   }
   for(int i=1;i<b+1;i++){
       for(int j=0;j<a+1;j++){
           
           if(A[j-1] == B[i-1] || B[i-1] == '?'){
               dp[i][j] = dp[i-1][j-1];
           }else if(B[i-1] == '*'){
               dp[i][j] = dp[i-1][j] || dp[i][j-1];
           }else{
               dp[i][j] = 0;
           }
       }
   }
   return dp[b][a];
}
