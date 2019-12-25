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
