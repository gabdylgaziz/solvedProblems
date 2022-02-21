#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int inf = 1e9;

int main()
{
    freopen("king2.in", "r", stdin);
    freopen("king2.out", "w", stdout);
    int n = 8;
    vector< vector<ll> > a(n + 1, vector<ll>(n + 1)), dp(n + 1, vector<ll>(n + 1, 0));
    vector<ll> pref;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    
    dp[8][1] = a[8][1];
    
    for(int i = 2; i <= n; i++)
    {
        dp[8][i] = dp[8][i - 1] + a[8][i];
    }
    
    for(int i = n - 1; i >= 1; i--)
    {
        dp[i][1] = a[i][1] + dp[i + 1][1];
    }
    
    /*for(int i = n; i >= 1; i--)
    {
        cout << dp[i][1] << ' ';
    }*/

    /*for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }*/
    
    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = 2; j <= n; j++)
        {
            dp[i][j] = min(min(dp[i][j - 1], dp[i + 1][j]), dp[i + 1][j - 1]) + a[i][j];
        }
    }
    
    cout << dp[1][n];
    
    
}