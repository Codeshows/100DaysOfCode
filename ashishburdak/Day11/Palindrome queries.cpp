#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mp map<long, long>
#define um unordered_map<long, long>
#define pll pair<long, long>
#define st set<long> 
#define us unordered_set<long>
#define vt vector<long>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)

int main()
{
	int q,l,r;
	cin>>q;
	string s;
	cin>>s;
	int a[s.length()][26]={0};
	fl(i, 0, s.length())
	{
	    if(i==0)
	    {
	        a[i][s[i]-'a']++;
	    }
	    else
	    {
	        fl(j, 0, 26)
	        {
	            a[i][j] = a[i-1][j];
	        }
	        a[i][s[i]-'a'] = a[i-1][s[i]-'a']+1;
	    }
	}
	while(q--)
	{
	    long x=0, y=0;
	    cin>>l>>r;
	    l--;
	    r--;
	    if(l==0)
	    {
	        fl(i, 0, 26)
	        {
	            if(a[r][i]&1)
	            x++;
	            if(a[r][i]>0)
	            y++;
	        }
	        if((y&1 && x==1) || (!(y&1) && x==0))
	        cout<<"Possible"<<endl;
	        else
	        cout<<"Impossible"<<endl;
	    }
	    else
	    {
	        fl(i, 0, 26)
	        {
	            if((a[r][i]-a[l-1][i])&1)
	            x++;
	            if((a[r][i]-a[l-1][i])>0)
	            y+=(a[r][i]-a[l-1][i]);
	        }
	        if((y&1 && x==1) || (!(y&1) && x==0))
	        cout<<"Possible"<<endl;
	        else
	        cout<<"Impossible"<<endl;
	    }
	}
	return 0;
}
