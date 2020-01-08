//Codeforces 327-A Flipping Game (Basic DP):-

/*Iahub got bored, so he invented a game to be played on paper.

He writes n integers a1, a2, ..., an. Each of those integers can be either 0 or 1. He's allowed to do 
exactly one move: he chooses two indices i and j (1 ≤ i ≤ j ≤ n) and flips all values ak for which 
their positions are in range [i, j] (that is i ≤ k ≤ j). Flip the value of x means to apply operation 
x = 1 - x.

The goal of the game is that after exactly one move to obtain the maximum number of ones. Write a 
program to solve the little game of Iahub.

Input
The first line of the input contains an integer n (1 ≤ n ≤ 100). In the second line of the input 
there are n integers: a1, a2, ..., an. It is guaranteed that each of those n values is either 0 or 1.

Output
Print an integer — the maximal number of 1s that can be obtained after exactly one move.*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)

int main(){
      ll n,sum=0;
      cin>>n;
      ll a[n];
      ll b[n];
      for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)
                  b[i]=-1;
            else
                  b[i]=1;
      }

      ll max_so_far=INT_MIN, max_ending_here = 0;
      ll st=0,ed=0,s=0;
  
      for (ll i = 0; i <n; i++) 
      { 
            max_ending_here+=b[i]; 
            if (max_so_far < max_ending_here){
                  max_so_far = max_ending_here;
                  st=s;
                  ed=i;
            }
            if(max_ending_here<0){
                  max_ending_here=0;
                  s=i+1;
            }
      }
      
      for(ll i=0;i<n;i++){
            if(i<=ed && i>=st)
                  sum=sum+(1-a[i]);
            else
                  sum+=a[i];
      }
      cout<<sum;      
      return 0;
}
