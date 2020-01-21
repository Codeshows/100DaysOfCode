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
    int l=0;
    int r=n-1;
    while(l<r)
    {
        if((a[l]+a[r])==target)
        {
        cout<<a[l]<<" and "<<a[r]<<endl;
        l++;
        }
        if((a[l]+a[r])>target)
        {
            r--;
        }
        if((a[l]+a[r])<target)
        {
            l++;
        }
    }
    return 0;
}
