#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[1001];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
    int l=i+1;
    int r=n-1;
    while(l<r)
    {
        if((a[l]+a[r])==(target-a[i]))
        {
        cout<<a[i]<<", "<<a[l]<<" and "<<a[r]<<endl;
        l++;
        }
        if((a[l]+a[r])>(target-a[i]))
        {
            r--;
        }
        if((a[l]+a[r])<(target-a[i]))
        {
            l++;
        }
    }
    }

    return 0;
}
