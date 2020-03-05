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
        ll n,k,flag=1;
        cin>>n>>k;
        char s[n][n];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cin>>s[i][j];
                if(!(s[i][j]=='P'||s[i][j]=='T')){
                    flag=0;
                }
            }
        }
        if(flag==0){
            cout<<0<<endl;
            break;
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            vector <ll> pol; vector <ll> thi;
            for(ll j=0;j<n;j++){
                if(s[i][j]=='T'){
                    thi.push_back(j);
                }
                else{
                    pol.push_back(j);
                }
            }
            ll x=0,y=0;
            while(x<pol.size()&&y<thi.size()){
                if(abs(pol[x]-thi[y])<=k){
                    ans++;
                    x++;y++;
                }
                else if(pol[x]>thi[y]) y++;
                else x++;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
