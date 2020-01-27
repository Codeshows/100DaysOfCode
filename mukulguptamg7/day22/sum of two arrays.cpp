#include <bits/stdc++.h> 
#include<iostream>
using namespace std; 
void calSumUtil(int a[], int b[], int n, int m) 
{  
    int sum[n],ss[1001]; 
  
    int i = n - 1, j = m - 1, k = n - 1; 
  
    int carry = 0, s = 0;  
    while (j >= 0) { 
 
        s = a[i] + b[j] + carry; 
        sum[k] = (s % 10); 
   
        carry = s / 10; 
  
        k--; 
        i--; 
        j--; 
    } 
    while (i >= 0) { 

        s = a[i] + carry; 
        sum[k] = (s % 10); 
        carry = s / 10; 
  
        i--; 
        k--; 
    } 
  
    int ans = 0;  
    if (carry) 
        ans = 10; 
    for (int i = 0; i <= n - 1; i++) { 
        ans += sum[i]; 
        ans *= 10; 
    } 
  int d=ans/10;
  int f=0;
    while(d!=0)
    {
        ss[f]=d%10;
        d=d/10;
        f++;
    }
    for(i=f-1;i>=0;i--)
    {
        cout<<ss[i]<<", ";
    }
    cout<<"END";

} 
void calSum(int a[], int b[], int n, int m) 
{ 
    if (n >= m) 
         calSumUtil(a, b, n, m); 
  
    else
         calSumUtil(b, a, m, n); 
} 
  
int main() 
{ 
    int a[1001],b[1001],i,n,m;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>m;
    for(i=0;i<m;i++)
    cin>>b[i];
  
    calSum(a, b, n, m); 
  
    return 0; 
}
