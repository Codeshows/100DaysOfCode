#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, ans=0;
    cin>>n;
    vector<long> a(n), b(n);
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(i==0)
        b[i]=a[i];
        else
        {
            if(a[i]<b[i-1])
            b[i]=a[i];
            else
            b[i]=b[i-1];
        }
    }
    for(int i=0;i<n;++i)
    {
        if(a[i]==b[i])
        ans++;
    }
    cout<<ans<<endl;
	return 0;
}
