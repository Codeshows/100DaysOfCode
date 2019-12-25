
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
