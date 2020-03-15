#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int e=0;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			if(a%2==0) e++;
		}
		if(e==n||e==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
			
	}
}
