#include <iostream>
using namespace std;
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define MOD 1000000007
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
    SPEED;
    //CODE
    ll ans=0;
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a[26]={0};
    for(ll i=0;i<n;i++){
        a[s[i]-'a']++;
    }
    for(ll i=0;i<n;i++){
        ll b[26]={0};
        b[s[i]-'a']++;
        b[s[i+1]-'a']++;
        for(ll j=i+2;j<n;j++){
            b[s[j]-'a']++;
            if(s[i]==s[j]){
                for(ll k=0;k<26;k++){
                    if(b[k]>0&&(s[i]-'a')!=k){
                        ans+=((a[k]-b[k])*b[k]);
                    }
                    else if(b[k]-2>0){
                        ans+=((a[k]-b[k])*(b[k]-2));
                        
                    }    
                }
            }
        }
        a[s[i]-'a']--;
    }
    cout<<ans;
	return 0;
}

