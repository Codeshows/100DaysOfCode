// Carousel
// https://codeforces.com/contest/1328/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      test{
            ll n;
            cin>>n;
            ll a[n];
            ll c=0;
            cin>>a[0];
            for(ll i=1;i<n;i++){
                  cin>>a[i];
                  if(a[i]!=a[i-1] && c==0)
                        c++;
            }
            if(c==0){
                  cout<<"1"<<"\n";
                  for(ll i=0;i<n;i++)
                        cout<<"1"<<" ";
            }
            else if(n%2==0){
                  cout<<"2"<<"\n";
                  for(ll i=0;i<n/2;i++)
                        cout<<"1"<<" "<<"2"<<" ";
            }
            else{
                  ll k=-1,p=-1;
                  for(ll i=0;i<n-1;i++)
                        if(a[i]==a[i+1]){
                              k=i;break;
                        }
                  if(a[n-1]==a[0])
                        p=n-1;
 
                  if(p==n-1){
                        cout<<"2"<<"\n";
                        for(ll i=0;i<n/2;i++)
                              cout<<"1"<<" "<<"2"<<" ";
                        cout<<"1"<<" ";
                  }
                  else if(k==-1){
                        cout<<"3"<<"\n";
                        for(ll i=0;i<(n-1)/2;i++)
                              cout<<"1"<<" "<<"2"<<" ";
                        cout<<"3";
                  }
                  else{
                        cout<<"2"<<"\n";
                        cout<<"1"<<" ";
                        ll i=1,p=1;
                        while(i<=k){
                              if(p==1){
                                    cout<<"2"<<" ";
                                    p=2;
                              }
                              else{
                                    cout<<"1"<<" ";
                                    p=1;
                              }
                              i++;
                        }
                        if(p==1)
                              cout<<"1"<<" ";
                        else
                              cout<<"2"<<" ";
                        for(ll i=k+2;i<n;i++){
                              if(p==1){
                                    cout<<"2"<<" ";
                                    p=2;
                              }
                              else{
                                    cout<<"1"<<" ";
                                    p=1;
                              }
                        }
                  }
            }
            cout<<"\n";
      }
 
      return 0;
} 