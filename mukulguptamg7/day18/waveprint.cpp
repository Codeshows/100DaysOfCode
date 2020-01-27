#include<iostream>
using namespace std;
void waveprint(int a[][10],int r,int c)
{
	for(int j=0;j<c;j++)
	{
		if(j&1)
		{
			for(int i=r-1;i>=0;i--)
			{
				cout<<a[i][j]<<", ";
			}
		}
		else
		{
			for(int i=0;i<r;i++)
			{
				cout<<a[i][j]<<", ";
			}
		}
		
	}
	cout<<"END";
}
void readmatrix(int a[][10],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
}
int main() {
	int a[10][10];
	int r;
	int c;
	cin>>r;
	cin>>c;
	readmatrix(a,r,c);
	waveprint(a,r,c);
	return 0;
}
