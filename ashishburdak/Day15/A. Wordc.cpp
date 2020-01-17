#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int l=0, u=0;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]>=65 && s[i]<=91)
        u++;
        else
        l++;
    }
    if(l>=u)
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    return 0;
}
