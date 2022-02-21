#include <iostream>
#include <cmath>
#include <algorithm>
#include <fstream>
using namespace std;
 
int main()
{
    long long i, k, n, a[250][250], b[250][250], bmax;
    cin >> n;
    for(i=0;i<n;++i)
        for(k=0;k<i+1;++k)
            cin >> a[i][k];
    b[0][0]=a[0][0];
    if(n==1)
    {
     cout << b[0][0];
     return 0;
    }
    b[1][0]=a[0][0]+a[1][0];
    b[1][1]=a[0][0]+a[1][1];
    if(n==2)
    {
        cout << max(b[1][0],b[1][1]);
        return 0;
    }
    for(i=2;i<n;++i)
    {
        b[i][0]=b[i-1][0]+a[i][0];
        b[i][i]=b[i-1][i-1]+a[i][i];
        for(k=1;k<i;++k)
               b[i][k]=max(b[i-1][k-1],b[i-1][k])+a[i][k];
    }
    bmax=b[n-1][0];
    for(k=1;k<n;++k)
        bmax=max(bmax,b[n-1][k]);
    cout << bmax;
    return 0;
}