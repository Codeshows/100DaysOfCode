#include<iostream>
using namespace std;
void staircasesearch(int a[][30],int r,int c,int key)
{
    int i=0;
    int j=c-1;
    while(i<r&&j>=0)
    {
        if(a[i][j]==key)
        {
            cout<<"1";
            return;
        }
        else if(a[i][j]>key)
        {
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"0";
    return;
}
int main() {
    int a[30][30];
    int r;
    int c;
    cin>>r;
    cin>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int key;
    cin>>key;
    staircasesearch(a,r,c,key);
	return 0;
}
