#include<bits/stdc++.h>

using namespace std;
int isSorted(int *a,int l){
    int flag=1;
    for(int i=0;i<l-1;i++){
        if(a[i]>a[i+1]){
            flag=0;
        }
    }
    return flag;
}


int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int r=n;
    while(r>0){
    for(int i=0;i<n;i=i+r){

        if(isSorted(a+i,r)==1){

            cout<<r;
            return 0;
        }}
        r/=2;
    }
    cout<<1;


    return 0;
}
