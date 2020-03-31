#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n) {
    
    unordered_map <int,int> m;
    int ans=0;
    int sum=0;
    m.insert(make_pair(0,-1));
    for(int i=0;i<n;i++){
        if(arr[i]==1)sum++;
        else sum--;
        if(m.find(sum)==m.end()){
            m.insert(make_pair(sum,i));
        }
        else{
            ans=max(ans,i-m[sum]);
        }
    }
    return ans;

}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << maxLen(a, n) << endl;
    }
    return 0;
}
