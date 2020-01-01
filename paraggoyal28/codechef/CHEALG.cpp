#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long test, i;
    string sstr;
    long long count = 0,flag;
    cin >> test;
    string str;
    
    while(test--)
    {
        cin >> str;
        sstr=str[0];
        count = 1;    
        i = 1;
        flag = 0;
        while(i<str.length())
        {
            while(i < str.length()  && str[i]==str[i-1])
            {
                count++;
                i++;
            }
            sstr += to_string(count);
            count = 1;
            if(i == str.length())
                flag = 1;
            else
                sstr += str[i];
                i++;
        }
        if(flag==0)
            sstr+=to_string(count);

        if(sstr.length() < str.length())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
	return 0;
}
