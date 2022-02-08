#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll n, ans = 0; cin >> n;
    if(n % 2 == 0)
    {
        ans = n / 2;
    }else{
        ans = (-1) * ((n + 1) / 2);
    }
    cout << ans;
    
}

int main()
{
    solve();
}