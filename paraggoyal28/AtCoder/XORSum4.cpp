#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const ll mod = 1e9 + 7;
 
int main() {
  		int N; cin >> N;
  		ll A[N];	
  		for (int i = 0; i < N; i++) cin >> A[i];
  		ll ans = 0;
  		for (int bit = 0; bit < 62; bit++) {
          		ll p = 0, q = 0;
          		for (int j = 0; j < N; j++) {
                  		if (A[j] >> bit & 1) p++;
                  		else q++;
                }
          		ll mult = (p * q) % mod;
          		for (int j = 0; j < bit; j++) {
                  	mult = (mult * 2)% mod;
                }
          		ans += mult;
          		ans %= mod;
        }
  		cout << ans << endl;
  		return 0;
}

/**
In an operation of taking XOR, each bit is independent from other bits,
so you can think each bit independently. Therefore, it is sufficient 
to solve for Ai is 0 or 1. Ai XOR Aj is 0 if Ai = Aj , and 1 
if Ai ̸= Aj , so it holds that N ∑−1 i=1 ∑ N j=i+1
(Ai XOR Aj ) = #{(i, j) | i < j and Ai ̸= Aj}
= (number of 0s) × (number of 1s).
Now you have to find, for each bit, the number of elements such that 
the bit is 0 and 1, so the original problem can be solved in a 
total of O(N log max Ai) time
*/