#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test;
    long long red, blue, green;
    cin >> test;
    while(test--)
    {
        cin >> red >> blue >> green;
        if((red + blue < green - 1) || (blue + green < red - 1) 
        || (red + green < blue - 1))
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
