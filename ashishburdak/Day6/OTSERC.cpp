#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,x,ans;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=n%12;
        if(x==1)
        {
            ans=(n+11);
            str="Blue";
        }
        else if(x==2)
        {
            ans=(n+9);
            str="Yellow";
        }
        else if(x==3)
        {
            ans=(n+7);
            str="Red";
        }
        else if(x==6)
        {
            ans=(n+1);
            str="Blue";
        }
        else if(x==5)
        {
            ans=(n+3);
            str="Yellow";
        }
        else if(x==4)
        {
            ans=(n+5);
            str="Red";
        }
        
        else if(x==7)
        {
            ans=(n-1);
            str="Blue";
        }
        else if(x==8)
        {
            ans=(n-3);
            str="Yellow";
        }
        else if(x==9)
        {
            ans=(n-5);
            str="Red";
        }
        else if(x==10)
        {
            ans=(n-7);
            str="Red";
        }
        else if(x==11)
        {
            ans=(n-9);
            str="Yellow";
        }
        else if(x==0)
        {
            ans=(n-11);
            str="Blue";
        }
    
        cout<<ans<<"\n";
        cout<<str<<"\n";
    }
	return 0;
}
