//https://practice.geeksforgeeks.org/problems/implement-atoi/1

#include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}

int atoi(string s)
{
    int x=0;
    int idx=0;
    if(s[0]=='-')
        idx=1;
    for(int i=idx;i<s.length();i++){
        if(s[i]<='9' && s[i]>='0'){
            x=x*10+(s[i]-'0');
        }
        else{
            x=-1;break;
        }
    }
    if(x==-1) return x;
    else{
        if(s[0]=='-')
            return -x;
        return x;
    }
}