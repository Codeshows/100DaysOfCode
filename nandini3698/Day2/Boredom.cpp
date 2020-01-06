//Codeforces 445-A Boredom (Basic DP):-

/*Alex doesn't like boredom. That's why whenever he gets bored, he comes up with games. One long winter 
evening he came up with a game and decided to play it.

Given a sequence a consisting of n integers. The player can make several steps. In a single step he can 
choose an element of the sequence (let's denote it ak) and delete it, at that all elements equal to 
ak + 1 and ak - 1 also must be deleted from the sequence. That step brings ak points to the player.

Alex is a perfectionist, so he decided to get as many points as possible. Help him.

Input
The first line contains integer n (1 ≤ n ≤ 105) that shows how many numbers are in Alex's sequence.

The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 105).

Output
Print a single integer — the maximum number of points that Alex can earn.*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      ll n;
      cin>>n;
      ll a[100001];
      memset(a,0,sizeof(a));
      for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            a[x]++;
      }
      ll dp[100001];
      dp[0]=0;
      dp[1]=a[1];
      for(ll i=2;i<100001;i++)
            dp[i]=max(dp[i-1],dp[i-2]+i*a[i]);
      cout<<dp[100000];
      return 0;
}