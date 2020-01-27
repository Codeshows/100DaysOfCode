#include<iostream>
using namespace std;
int main() {
	int t;
	long long int a[100000];
	long long int n;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int cs=0;
	int ms=0;

	for(int i=0;i<n;i++)
	{
		cs=cs+a[i];
		if(cs<0)
		{
			cs=0;
		}
		ms=max(ms,cs);
	}
cout<<ms<<endl;
	}
	
	return 0;
}
