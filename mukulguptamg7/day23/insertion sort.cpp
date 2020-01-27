#include<iostream>
using namespace std;
int main() {
    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
         while (j >= 0 && a[j] > key) 
        {  
            a[j + 1] = a[j];  
            j = j - 1;  
        }  
        a[j + 1] = key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        cout<<endl;
    }
	return 0;
}
