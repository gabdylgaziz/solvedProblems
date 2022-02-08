#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    string s; cin >> s;
    queue<char> q1, q2;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            q1.push(s[i]);
        }
        if(s[i] == '[')
        {
            q2.push(s[i]);
        }
        if(s[i] == ')' && !q1.empty())
        {
            q1.pop(); cnt++;
        }
        if(s[i] == ']' && !q2.empty())
        {
            q2.pop(); cnt++;
        }
    }
    cout << cnt << '\n';
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
       solve(); 
    }
    
}