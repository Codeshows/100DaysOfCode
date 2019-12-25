// Not able to solve the problem myself. Refering editorial
// DIFFICULY: Easy-medium
// Prerequisites: Observation, Two-pointers
// Problem: There are N cars on a circular track of circumference K. The ith car is Xi meters away from the start point of the race track in the clockwise direction and is either going in clockwise( Di = 1) or counter-clockwise ( Di = 2) direction with the constant spped of 1. Whenever two cars crash into each other (not necessarily in an integer point), they both change the direction they were going and continue driving the new direction. Find the number of crashes that will happend until the Tith second for Q queries.
// Quick Explanation
// Whenever two cars crash, we can assume that they pass right through each other(they continue) in the same direction they were going). This doesn't affect the number of crashes.
// Since now no car changes it's direction, crashes only happen between the cars that have different values of D.As a result, we can consider the cars with Di = 2 to be stationary and the cars with Di = 1 to move with  a constant speed of 2.
// Every K/2 seconds, a racer with Di = 1 crashes into all the racers with Di = 2.So we can count such crashes and we're left with T < K/2.
// Now for each pair of racers, at most one crash might happen. More specifically, a clokcwise racer at position A will crash into a counter-clockwise racer at position B if and only if A <= B <= A+2T or A <= B + K <= A + 2T. It's wasy to see that such racers belong to a continuous segment of the race track.
// We can loop over the racer with Di = 1 and keep track of the mentioned segment of the race track. It can be done with two pointers after sorting the racers according to their positions.
// Time Complexity:
// The time complexity is O(N . (Q + log(N))).
// Solution

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
