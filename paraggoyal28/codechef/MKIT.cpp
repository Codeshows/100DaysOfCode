// Wasn't able to solve myself. Taking code from editorial.

// Difficulty : Medium

// Prerequisites: Dynamic Programming

// Problem:
// You are given an array A of length N and an integer K. We call a subset of 
// elements of A good, if their product is divisible by K. We define the cost 
// of such subset to be the sum of all it's elements. You are given Q queries
// of form (Li,Ri) for each of which you should output the minimum cost of a 
// good subset of the array A, if we deleted all the indices in the interval
// [Li, Ri]. In case there's no good subset for a given query, output -1.

// Quick Explanation
// Let K = product from i = 1 to i = m pi ^ ai be the factorization of 
// K where pi are distinct prime number and 0 < ai.Then a number T is a multiple
// of K, if and only if for each pi it has at least ai of them. So we're only
// interested in these prime numbers and their relative count in the interval
// [0, ai].
// Define a state to represent how many of each pi we have. One can see that 
// each important state corresponds to a divisor of K since we should only
// keep track of the primes that K has (pi) and at most the amount that K has of 
// each in its factorization (ai).
// If our current subset's state corresponds to d,a divisior of K, then after
// adding an element a to it, it would corresponds to gcd(d * a, K).
// We can define dp(i,d) to be the minimum cost of a subset of the first i 
// elements that corresponds to d. Then dp(i,d) = min(dp(i-1,d), dp(i-1,j) + Ai) 
// for all such j that gcd(j * Ai, K ) = d. Similarly define pd(i,d) to be the 
// minimum cost of a subset of the elements in the interval [i, N] that correspond
// to d. Then we can retrieve the answer for a query(Li, Ri) using the data we 
// calculated in dp(L(i)-1) and pd(R(i)+1).

#include<bits/stdc++.h>
#pragma GCC optimzie("O3");
using namespace std;
const int N = 100005, K = 779;
int n, q, k, d, A[N], Id[K][K];
uint32_t dp[N][K], pd[N][K];
vector<int> D,P;
inline void SMin(uint32_t &a, uint32_t b){ a = min(a,b); }
int main()
{
	scanf("%d%d%d", &n, &q, &k); // getting n and queries and k
	for (int i = 1; i <= n; i++)
		scanf("%d", &A[i]);      // getting each number 
	for (int i = 1; i*i <= k; i++) // calculating the factors of k
		if (k%i == 0)
		{
			D.push_back(i);
			if (i < k/i)
				D.push_back(k/i);
		}
	sort(D.begin(), D.end());  // sorting the factors
	d = (int) D.size();  // calculating the size of factors
	// Calculating the possible states 
	for (int i = 0;i < d;i++)
		for (int j = 0; j < d; j++)
			Id[i][j] = (int)(lower_bound(D.begin(), D.end(), __gcd(1LL * D[i] * D[j], 1LL * k)) - D.begin());
	
	// Calculating only the prime factors
	for (int i = 1; i < d; i++)
	{
		bool Fail = 0;
		for (int j = 1; j < i; j++)
				if(D[i] % D[j] == 0)
					Fail = 1;
		if (!Fail)
			P.push_back(i);
	}
	// 
	for (int j = 1; j < d; j++)
		dp[0][j] = (uint32_t)(3e9);
	for (int i = 1; i <= n; i++)
	{
		int id = (int)(lower_bound(D.begin(), D.end(), __gcd(A[i], k)) - D.begin());
		for (int j = 0;j < d; j++)
			dp[i][j] = dp[i-1][j];
		for (int j = 0;j < d; j++)
			SMin(dp[i][Id[j][id]], dp[i-1][j] + A[i]);
	}
	for (int j = 1; j < d; j++)
		pd[n+1][j] = (uint32_t)(3e9);
	for (int i = n; i; i--)
	{
		int id = (int)(lower_bound(D.begin(), D.end(), __gcd(A[i], k)) - D.begin());
		for (int j = 0; j < d; j++)
			pd[i][j] = pd[i+1][j];
		for (int j = 0; j < d; j++)
			SMin(pd[i][Id[j][id]], pd[i+1][j] + A[i]);
	}
	for(int i = 1; i <= n; i++)
		for(int j = d-1; ~j; j--)
			for(int p : P)
				SMin(dp[i][j], dp[i][Id[j][p]]),
				SMin(pd[i][j], pd[i][Id[j][p]]);
	for(; q; q--)
	{
		int l, r;
		long long Mn = dp[0][1];
		scanf("%d%d", &l, &r);
		for (int j = 0; j < d; j++)
			Mn = min(Mn, (long long)dp[l-1][j] + pd[r+1][d- j- 1]);
		if (Mn >= (long long)(3e9))
			Mn = -1;
		printf("%lld\n", Mn);
	}
	return 0;
}
