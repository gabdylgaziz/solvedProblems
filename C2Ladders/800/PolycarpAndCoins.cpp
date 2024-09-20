#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int c1, c2;
        c1 = n / 3;
        c2 = c1;
        if ((n - (c1 * 3)) == 2) {
            cout << c1 << ' ' << c2 + 1 << '\n';
            continue;
        }
        cout << (n - (c1 * 3) + c1) << ' ' << c2 << '\n';
    }
}