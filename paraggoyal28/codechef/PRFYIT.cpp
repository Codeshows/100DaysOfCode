
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
