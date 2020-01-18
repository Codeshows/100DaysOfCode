#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, x, ok=0;
    unordered_map<long, long> a;
    cin>>n;
    for(int i=n+1;;++i)
    {
        a.clear();
        x=i;
        ok=1;
        while(x>0)
        {
           a[x%10]++;
           if(a[x%10]>1)
           {
               ok=0;
               break;
           }
           x/=10;
        }
        if(ok)
        {
            x=i;
            break;
        }
    }
    cout<<x<<endl;
    return 0;
}
