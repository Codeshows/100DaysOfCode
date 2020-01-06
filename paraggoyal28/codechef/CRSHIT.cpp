

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,q; ll k;
vector<ll> A[2];
int main()
{
	scanf("%d%d%lld", &n,&q,&k);
	for(ll i = 1,d,x; i<=n; i++)
		scanf("%lld%lld", &d, &x), A[d-1].push_back(x);
	sort(A[0].begin(),A[0].end());
	sort(A[1].begin(), A[1].end());
	for(int i = 0;i < n - (int)A[0].size(); i++)
		A[1].push_back(A[1][i] + k);
	for(; q; q--)
	{
		ll t, tot = 0;
		scanf("%lld", &t); t*=2;
		tot += t / k * (ll) A[0].size() * (ll) A[1].size() /2;
		t %= k;
		int l = 0, r= 0;
		for(ll a: A[0])
		{
			while (l < (int) A[1].size() && A[1][l] < a)
				l++;
			while (r < (int)A[1].size() && A[1][r] <= a + t)
				r++;
			tot += r - l;
		}
		printf("%lld\n", tot);
	}
	return 0;
}
