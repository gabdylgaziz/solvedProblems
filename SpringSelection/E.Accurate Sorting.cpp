#include<bits/stdc++.h>
using namespace std;

bool isSort(int a[], int n)
{
    for (int i=0; i < n-1; i++)
    {
        if (a[i] > a[i+1])
        {
            if (a[i] - a[i+1] == 1)
                swap(a[i], a[i+1]);
            else
                return false;
        }
    }
    return true;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (isSort(a, n)){
            cout << "Yes" << '\n';
        }else{
            cout << "No" << '\n';
        }
    }
}