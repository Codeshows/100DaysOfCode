#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mp map<long, long>
#define um unordered_map<long, long>
#define pll pair<long, long>
#define st set<long> 
#define us unordered_set<long>
#define vt vector<long>
#define vp vector<pll>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)

int main() {
	// your code goes here
	ll r=0;
	string m, y="";
	cin>>m;
	fl(i, 0, m.length())
	{
	    r = (r*10 + (m[i]-'0'))%4;
	}
	ll i=m.length()-1, k;
	switch(r)
	{
	    case 0: y=m;
	    break;
	    case 1: y="1";
	    break;
	    case 2: 
	    if(m.length()==1)
	    {
	        y+=to_string((m[i]-'0')+1);
	    }
	    else
	    {
	        while(m[i]=='9' && i>=0)
	        i--;
	        if(i==0 && m[i+1]=='9')
	        {
	            y+="1";
	            k = m.length();
	            while(k--)
	            y+="0";
	        }
	        else
	        {
	            y = m.substr(0, i);
	            y+=to_string((m[i]-'0')+1);
	            if(m[i+1]=='9')
	            {
	                k = m.length() - i;
	                while(k--)
	                y+="0";
	            }
	        }
	    }
	    break;
	    case 3: y="0";
	}
	cout<<y<<endl;
	return 0;
}
