#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int backpack(ll S, const vector<ll> &v) {
    vector< vector<ll> > dp(v.size()+1,vector<ll>(S+1));
  
    for (ll i = 1; i <= v.size(); i++){
        for(ll j = 1; j <= S; j++)
        {
     	    dp[i][j] = dp[i-1][j];
     	    if(v[i-1] <= j) dp[i][j] = max(dp[i-1][j-v[i-1]]+ v[i-1], dp[i][j]);
        }
  }
  
  return dp[v.size()][S];
  
}

int main() {
    ll N, S; cin >> S >> N;
    vector<ll> w(N);
    for (ll i = 0; i < N; i++) 
    {
        cin >> w[i];
    }
    cout << backpack(S, w);
  
}