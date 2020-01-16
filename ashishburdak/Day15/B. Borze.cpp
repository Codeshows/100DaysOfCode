#include <iostream>
using namespace std;

int main()
{
    string s, a="";
    cin>>s;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='-'&& s[i+1]=='-')
        {
            i++;
            a+='2';
        }
        else if(s[i]=='-'&& s[i+1]=='.')
        {
            i++;
            a+='1';
        }
        else if(s[i]=='.')
        {
            a+='0';
        }
    }
    cout<<a<<endl;
    return 0;
}
