#include <iostream>

using namespace std;

void solve()
{
    int n; cin >> n;
    int ans;
    if(n%3==0){
  	ans=n/3*2;
    }else{
	ans=(n/3+1)*2-1;
    }
    cout << ans << '\n';
}

int main() 
{
	solve();
}