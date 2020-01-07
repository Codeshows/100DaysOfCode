int Solution::strStr(const string A, const string B) 
{
    if(B.length() == 0 || (A.length()==0 && B.length()==0)){
        return -1;
    }
   string str = A;
   string subString = B;
   int s = subString.length();
   vector<int> lps(s, 0);
   int i,j;
   j = 0;
   for(i=1;i<s;){
     if(subString[i] == subString[j]){
       lps[i] = j + 1;
       i++;
       j++;
     }else{
       if(j == 0){
         lps[i] = 0;
         i++;
         continue;
       }
       j = lps[j-1];
     }
   }
   int n = str.length();
   i = 0;
   j = 0;
   while(i<n && j<s){
     if(str[i] == subString[j]){
       i++;
       j++;
       continue;
     }
     if(j == 0){
       i++;
       continue;
     }
     j = lps[j-1];
   }
   if(j == s){
     return (i-j);
   }else{
     return -1;
   }
    
}
