#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int inf = 1e9;

int main()
{
    ll n; cin >> n;
    ll a[n + 1], dp[10000];
    for(size_t i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    dp[0] = 0;
    dp[1] = a[1];
    for(size_t i = 2; i <= n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2]) + a[i];
    }
    cout << dp[n];
}