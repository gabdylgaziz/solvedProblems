#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector< vector<ll> > a(n + 1, vector<ll>(n + 1)), dp(n + 1, vector<ll>(n + 1));
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }
    dp[1][1] = a[1][1];
    for(int i = 2; i <= n; i++)
    {
        dp[i][1] = dp[i - 1][1] + a[i][1];
    }
    for(int i = 2; i <= n; i++)
    {
        dp[i][i] = dp[i - 1][i - 1] + a[i][i];
    }
    
    for(int i = 2; i <= n; i++)
    {
        for(int j = 2; j <= i; j++)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + a[i][j];
        }
    }
    cout << dp[n][n];
}