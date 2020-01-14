#include<bits/stdc++.h>
using namespace std;
long long solve(long long a,long long b){

    static long long x=0;
    if(a==0){
        return x;
    }
    else{

    x+=b/a;
    solve(b%a,a);

    }}
  
int main()
{   long long a,b;
    cin>>a>>b;
    long long t;
    t=solve(a,b);
    cout<<t;

    return 0;
}
