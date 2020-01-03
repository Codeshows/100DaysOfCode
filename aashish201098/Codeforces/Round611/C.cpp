#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n;
    cin>>n;
    vector<int> f(n+1);
    queue<int> zeros;
    map<int,int> m;
    vector<int> ans(n+1);
    for(int i=1;i<=n;i++) {
        cin>>f[i];
        m[f[i]]++;
    }
    for(int i=1;i<=n;i++) {
        if(!m[i]) zeros.push(i);
    }
    bool flag = false;
    for(int i=1;i<=n;i++) {
        if(f[i] == 0){
            int value = zeros.front();
            if(value == i && zeros.size() != 1){
                zeros.pop();
                zeros.push(value);
                value = zeros.front();
            } else if(value == i && zeros.size() == 1){
                flag = true;
                break;
            }
            ans[i] = value;
            zeros.pop();
        }else{
            ans[i] = f[i];
        }
    }
    if(flag) {
        while(!zeros.empty()) zeros.pop();
        for(int i=1;i<=n;i++) {
            if(!m[i]) zeros.push(i);
        }
        for(int i=n;i>=1;i--) {
        if(f[i] == 0){
            int value = zeros.front();
            if(value == i){
                zeros.pop();
                zeros.push(value);
                value = zeros.front();
            }
            ans[i] = value;
            zeros.pop();
        }else{
            ans[i] = f[i];
        }
    }
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<'\n';
	return 0;
}
