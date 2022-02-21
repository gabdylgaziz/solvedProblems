#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int inf = 1e9;

int main()
{
    ll n; cin >> n;
    ll dp[10000];
    dp[0] = 1;
    dp[1] = 1;
    for(size_t i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n];
}