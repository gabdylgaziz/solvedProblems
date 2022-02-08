#include <iostream>

using namespace std;

void solve()
{
    int n, i = 0, sum = 0, m = 0; cin >> n;
    string s; cin >> s;
    while(s[i])
    {
        if(s[i+1] == s[i])
        {
            while(s[i+1]==s[i])
            {
                m++;
                i++;
            }
        }else
        {
            sum += m;
            m = 0;
            i++;
        }
    }
    cout << sum << '\n';
}

int main()
{
    solve();
}