#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll N, K;
    cin >> N;
    cin >> K;
    ll s[N];
    ll T[N];
    for (ll i = 0; i < N; i++)
    {
        cin >> s[i];
        T[i] = 0;
    }
    ll j_last = 0;
    for(ll i = 0; i < N; i++){
        if (s[i] < 0)
        {
            continue;
        }
        else
        {
            for (ll j = j_last; j < min(i + K + 1, N); j++){
                if (s[j] > 0){
                    continue;
                }
                if ((s[i]+T[i]) > 0 && (s[j]+T[j]) < 0){
                    ll x = min(s[i]+T[i], -s[j]-T[j]);
                    T[i] = T[i] - x;
                    T[j] = T[j] + x;
                }
                j_last = j;
                if ((s[i]+T[i]) <= 0){
                    break;
                }
            }
        }
    }
    ll sum = 0;
    for (ll i = 0; i < N; i++){
        sum = sum + abs(s[i] + T[i]);
    }
    cout << sum;
	return 0;
}
