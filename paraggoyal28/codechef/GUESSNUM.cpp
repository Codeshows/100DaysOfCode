#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	
	cin >> t;

	while(t--)
	{
		long long int a, m, i, k, z, j, h;
		vector <long long int> v;
		cin >> a >> m;

		for(i = 1; i*i <= m; i++)  // i stands for (x*a + 1)
		{
			if(m%i == 0)
			{
				if((i-1)%a == 0) // calculating x
				{
					h = m/i; // calculating d
					k = (i-1)/a; // calculating x
					if(k!=0)
					{
						z = (h*k);
						v.push_back(z);
					}
				}
				j = m/i;
				if((j-1)%a == 0 && j!=i)
				{
					h = m/j;
					k = (j-1)/a;
					if(k!=0)
					{
						z = h*k;
						v.push_back(z);
					}
				}
			}
		}
		sort(v.begin(),v.end());
		cout << v.size() << endl;

		for(auto it: v)
			cout << it << " ";
		cout << endl;
	}
}

