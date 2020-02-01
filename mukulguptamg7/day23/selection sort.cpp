#include<iostream>
using namespace std;
int main() {
    int n,i,j,a[100],t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        int imin=i;
        for(j=i+1;j<n;j++)
        {
          if(a[j]<a[imin])
          imin=j;
        }
        int t=a[i];
        a[i]=a[imin];
        a[imin]=t;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
        cout<<endl;
    }
	return 0;
}
