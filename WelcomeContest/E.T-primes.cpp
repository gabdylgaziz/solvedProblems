#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isTPrime(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    ll n; cin >> n;
    while(n--)
    {
        ll x; cin >> x;
        ll root = sqrt(x);
        if(root * root == x && x != 1)
        {
            if(isTPrime(root)) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }else cout << "NO" << '\n';
    }
}