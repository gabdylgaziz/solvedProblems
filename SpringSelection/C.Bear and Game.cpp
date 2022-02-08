#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int n;
vector<ll> v;

void read()
{
    cin >> n;
    v.push_back(0);
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        v.push_back(x);
    }
    if(v.back() != 90)
    {
        v.push_back(90);
    }
}

void solve()
{
    int sum = 0;
    bool ok = true;
    for(int i = 1; i < v.size(); i++)
    {
        if(ok)
        {
            int bor = v[i] - v[i - 1] - 1;
            if(bor >= 15)
            {
                sum+=15; ok = false;
            }else{
                sum = sum + bor + 1;
            }
        }
    }
    cout << sum;
}

int main()
{
    read();
    solve();
}