// Not able to solve myself, refering code from editorial

// Difficulty : Easy
// Prerequisites: Observation, Bit Manipulation
// Problem:
// Define XPR(N) to be a pair (A, B) such that:
// 1 <= A <= B <= N
// A XOR B  = N
// The value of A is minimized.
// If there is no valid pair for a number N, then XPR(N) = (-1, -1).
// Define function F(N) to be the value of B in XPR(N). Function G(L, R) is then
// defined as summation from i=L to i=R F(i). Calculate G(L, R) for Q queries.

// Quick Explanation 
// A and B should not have any common bit set.
// If N = 2^k for some 0<=k, then XPR(N) = (-1, -1). Otherwise A = 2^lb(N) and 
// B = N Xor A where lb(N) is the lowest bit of N.
// G(L,R) can be written as G(1, R) - G(1, L-1).
// We can find the opposite simmation, the values of A, much easier.
// Half of the numbers in [1, R] have lb(i) = 0. Half of the rest have lb(i) = 1.
// Half of the rest have lb(i) = 2, and so on.

// Explanation
// It can be proven that A sould have at least one common set bit with N. 
// Otherwise B would be N | A, and since 1 <= A, we'll have N < B. It can be 
// further proved that A and B will not have any common set bits since if they 
// had a common bit, we could've set it to zero in both of them, the value of
// A xor B would still be N, but the value of A decreases, which is contradictory
// with the fact of it being minimal. It's then easy to see that if N = 2^k, there
// can be no valid pair and XPR(N) = (-1, -1). Otherwise we can always pick 
// A = 2^lb(N). This will always be the optimal answer since A should have at
// least one common bit with N.

// We can rewrite G(L, R) as G(1, R) - G(1, L-1) in order to simplify our
// calculations. For now we'll consider F(N) = 0 for all N = 2^k. Define F'(N)
// as the value of A in XPR(N). As a result of above observations, F(N) = N -F'(N).
// We can then define G'(R) as summation from i = 1 to i = R F'(i). As a result,
// G(1, R) = R * (R + 1) /2 - G'(R). Now we only need to calculate G'(R).

// So for each number from 1 to R, we have to sum up the value of their lowest 
// bit. This can be handled in the following way:
// There are ceil(R/2) odd numbers that have their lb = 1.
// The even numbers contribute G'(ceil(R/2)) * 2 in total. This is because they're
// the same as the numbers in [1, ceil(R/2)], only multiplied by two. So the value
// of their lowest bit is also multiplied by two.

// We can finally subtract the number of numbers in [1, R] that are equal to some
// 2^k. This will automatically handle the cases when F(N) = -1.

// Time Complexity is O(log(N)) per test case.

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
inline ll Get(ll n)
{
	ll tot = n * (n+1)/2;
	for(ll b = 1; n; n >>= 1, b <<= 1)
		tot -= (n+1)/2 * b, tot --;
	return (tot);
}

int main()
{
	int q;
	scanf("%d", &q);
	for(; q; q--)
	{
		int l, r;
		scanf("%d%d", &l,&r);
		printf("%lld\n", Get(r) - Get(l-1));
	}
	return 0;
}
