#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int inf = 1e9;

int main()
{
    freopen("knight.in", "r", stdin);
    freopen("knight.out", "w", stdout);
    ll n, m; cin >> n >> m;
    vector< vector<ll> > dp(n + 17, vector<ll>(m + 17));
    dp[1][1] = 1;
    for(size_t i = 2; i <= n; i++)
    {
        for(size_t j = 2; j <= m; j++)
        {
            dp[i][j] = dp[i - 2][j - 1] + dp[i - 1][j - 2];
        }
    }
    cout << dp[n][m];
}