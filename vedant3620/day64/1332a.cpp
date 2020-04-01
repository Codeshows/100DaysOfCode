#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
 
int main() {
    SPEED;
    //CODE
	test(){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll flag=0;
		ll x,y,x1,y1,x2,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		ll xf=x+b-a;
		ll yf=y+d-c;
		
		if(xf>=x1&&xf<=x2&&yf>=y1&&yf<=y2&&(x1!=x2||(a==0&&b==0))&&(y1!=y2||(c==0&&d==0)))cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}