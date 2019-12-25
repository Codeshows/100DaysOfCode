//Referring Editorial Solution, Not able to solve myself.

//DIFFICULTY: Simple

//PROBLEM: Given a binary string S of length N, we want to delete minimum number of characters from it so that it wouldn't contain subsequence 0101 or 1010(so that it becomes pure). Find this minimum value.

// QUICK EXPLANATION:
// A string is pure if and only if there are at most 3 maximal blocks of consecutive equal characters in the string.
// We can calculate the number of 0's and 1's of an interval using partial sum(or dynamic programming).
// We can fix the endpoints of the 3 maximal blocks along with their character(0 or 1) and calculate the minimum number of indices which should be deleted in this configuration of blocks using parital sums.
//
// EXPLANATION:
// We define a block to be a maximal consecutive block of equal characters in a string. For example, the string 000110100111 consists of 6 blocks: 000, 11, 0, 1, 00 and 111. It's clear that the two consecutive blocks have different characters, or else they wouldn't have been maximal. As a result, any striung with more than 3 blocks will not be pure, since we can pick the first character of each of the firs 4 blocks and it would either be 0101 or 1010. So the resulting string should consists of at most 3 blocks.
// We can fix the interval of the middle block( say [L,R]) and it's character( say 0, the case of 1 is exactly the same). Now all we have to do is to count the number of indices i such that Si is different than the character of it's corresponding block. So we should count the number of 0's in the intervals [1, L-1] and[R+1, N] and the number of 1's in the interval [L, R]. We can calculate this value with partial sums. Namely, define Pi to be the number of 0's in the interval [1,i]. Then the number of 0's in an interval [A, B] will be P(B) - P(A-1). The number of 1's can also be calculated as (B-A+1) - (P(B) - P(A-1)). Thus, we can calculate the number of indices that have to be deleted in O(1). Fixing the interval is O(N^2) so we arrive at a final O(N^2) solution.
// The time complexity is O(N^2) per test case.

// Solution:

#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
int q, n, P[2][N];
char S[N];
int main()
{
	scanf("%d", &q);
	for(; q; q--)
	{
		scanf("%s", &S[1]);
		n = strlen(S + 1);
		for (int i = 1;i <= n; i++)
		{
			for (int w = 0; w<=1; w++)
			{
				P[w][i] = P[w][i-1] + (S[i] == w + '0');
			}
		}
		int Mn = n;
		for (int w = 0; w <= 1; w++)
		{
			for (int i =1; i<= n; i++)
			{
				for (int j = i; j<= n; j++)
				{
					Mn = min(Mn, P[w][i-1] + (j-i+1) - (P[w][j] - P[w][i-1]) + (P[w][n] - P[w][j]));
				}
			}
		}
		printf("%d\n", Mn);
		memset(S, 0, sizeof(S));
		memset(P, 0, sizeof(P));
	}
	return 0;
}
