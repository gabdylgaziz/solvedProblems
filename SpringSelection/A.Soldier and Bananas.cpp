#include <iostream>

using namespace std;

int main()
{
    int k, n, w, avg = 0; cin >> k >> n >> w;
    for(int i = 1; i <= w; i++)
    {
        avg = avg + i * k;
    }
    if(avg > n)
    {
        cout << avg - n;
    }else{
        cout << 0;
    }
    
}