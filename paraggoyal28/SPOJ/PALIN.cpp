#include <bits/stdc++.h>

#define max1(x, y) (x)>(y)?(x):(y)
#define s(n) scanint(n)
#define sc(n) scanf(" %c", &n)
#define sl(n) scanf("%ld", &n)
#define sll(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define ss(n) scanf("%s", n)
#define INF (int)1e9
#define EPS 1e-9
#define bitcount __builtin_popcount
#define gcd __gcd
#define forall(i, a, b) for(int i = a;i < b; i++)
#define all(a) a.begin(), a.end()
#define pb push_back
#define sz(a) ((int)(a.size()))
#define mp make_pair
#define checkbit(n, b) (( n>>b ) & 1)
#define gc getchar_unlocked
#define l long

using namespace std;

inline void scanint(int &x)
{
	register int c = gc();
	x = 0;
	int neg = 0;
	for(;((c < 48 || c > 57) && c != '-' );c = gc());
	if(c == '-') {neg = 1;c = gc();}
	for(;c > 47 && c < 58; c = gc()) { x = (x<<1) + (x<<3) + c - 48;}
	if(neg) x = -x;
}

int all_nine(string str) // check if all digits are 9
{
	for (int i = 0; i < str.length(); i++)
	{
		if(str[i]!='9')
			return 0;
	}
	return 1;
	
}
	
int main()
{
	string str;
	int t;
	s(t);
	
	while(t--) {
		cin >> str;
		int i, j, num;
		char ans[str.length()+3];
		int n = str.length();
		
		if (all_nine(str)) // if all digits are equal to 9
		{
			ans[0] = '1';
			for(i = 0; i < n; i++)
			{
				ans[i+1] = '0';
			}
			ans[n] = '1';
			ans[n+1]='\0';
			cout << ans << endl;
		}
		else
		{
			i = n/2;
			j = i;
			if(n % 2 == 0)
			{
				i = i - 1;
			}
			while(i >= 0 && str[i] == str[j])
			{                                // checking for equal from middle
				i--;
				j++;
			}
			if(i<0 || str[i] < str[j])
			{                               // not equal or string is palindrome
				i = n/2;
				j = i;
				if(n%2 == 0)
				{
					i = i - 1;
				}
				int carry = 1;
				while(i >= 0)
				{
					num = ((str[i]-'0') + carry);
					carry = num/10;
					str[i] = (num%10) + '0';
					str[j] = str[i];
					i--;
					j++;
				}
			}
			else
			{
				while(i >= 0)
				{
					str[j] = str[i];
					i--;
					j++;
				}
			}
			cout << str << endl;
		}
	}
	return 0;
	
}
