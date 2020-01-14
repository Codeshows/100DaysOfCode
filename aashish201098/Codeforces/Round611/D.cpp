#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n,m;
set<ll> s;
queue<pair<int,int>> q;

int main() {
    cin>>n>>m;
    vector<ll> x(n);
    vector<ll> pos(m);
    for(int i=0;i<n;i++) cin>>x[i];
    sort(x.begin(), x.end());
    for(int i=0;i<n;i++) {
        s.insert(x[i]);
        q.push({1, x[i]-1});
        q.push({1, x[i]+1});
    }
    ll ans = 0;
    for(int i=0;i<m;i++) {
        while(1){
            auto value = q.front();
            q.pop();
            if(s.count(value.second)) continue;
            if(s.count(value.second+1) == 0) q.push({value.first+1, value.second + 1});
            if(s.count(value.second-1) == 0) q.push({value.first+1, value.second - 1});
            int x = value.second;
            ans += value.first;
            pos[i] = x;
            s.insert(x);
            break;
        }
    }
    cout<<ans<<'\n';
    for(int i=0;i<m;i++) {
        cout<<pos[i]<<" ";
    }
    cout<<endl;
	return 0;
}
