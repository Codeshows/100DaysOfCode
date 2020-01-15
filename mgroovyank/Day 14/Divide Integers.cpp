int Solution::divide(int a, int b) {
   long long int n=a;
    long long int m=b;
   int sign = ((a < 0) ^ (b < 0)) ? -1 :1;
   long long q = 0;
   n = abs(n);
   m = abs(m);
   long long int t = 0;
   for (int i = 31; i >= 0; i--){
        if (t + (m << i) <= n){
            t += m << i;
            q |= 1LL << i;
        }
    }

   q=q*sign;
   return (q >= INT_MAX || q < INT_MIN) ? INT_MAX : q;
}
