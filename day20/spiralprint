#include<iostream>
using namespace std;
void spiralprintanticlockwise(int a[][10],int r,int c)
{
	int startrow=0,endrow=r-1,startcol=0,endcol=c-1;
	while(startrow<=endrow && startcol<=endcol)
	{
		for(int j=startrow;j<=endrow;j++)
		{
			cout<<a[j][startcol]<<", ";
		}
		startcol++;
		for(int i=startcol;i<=endcol;i++)
		{
			cout<<a[endrow][i]<<", ";
		}
		endrow--;
		for(int j=endrow;j>=startrow;j--)
		{
			cout<<a[j][endcol]<<", ";
		}
		endcol--;
		for(int i=endcol;i>=startcol;i--)
		{
			cout<<a[startrow][i]<<", ";
		}
		startrow++;
	}
}

int main() {
	int a[10][10];
	int r;
	int c;
	cin>>r>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	spiralprintanticlockwise(a,r,c);
	cout<<"END";
	return 0;
}
