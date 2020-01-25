#include<iostream>
using namespace std;
void primes(int *p,int b)
{
    for( int i=2 ;i<=b;i++)
    {
        p[i]=1;
    }
    for(int i=2;i<=b;i++)
    {
        if(p[i])
        {
            for( int j=2*i;j<=b;j+=i)
            {
                p[j]=0;
            }
        }
    }
    p[1]=0;
    p[0]=0;
    return;
}
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int a,b;
        cin>>a>>b;
        int cnt=0;
        int*p=new int [1000001];
        primes(p,b);
        for(int i=a;i<=b;i++)
        {
            if(p[i]==1)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
