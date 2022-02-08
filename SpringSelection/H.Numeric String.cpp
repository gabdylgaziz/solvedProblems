#include <bits/stdc++.h>

using namespace std;

int k,b,m;

char str[300005];

int main(){
	cin >> str >> k >> b >> m;
	int n = strlen(str), ans=0, module=1, temp=0;
	for(int x = 0; x < k; x++)
	{
	    module=module*b%m;
	}
	for(int x=0;x<n;x++)
	{
		temp = (temp * b + str[x] -'0') % m;
		if(x>=k)
		{
		    temp=(temp+m-(str[x-k]-'0')*module%m)%m; 
		} 
		if(x>=k-1){
		    ans+=temp;   
		}
	}
	cout << ans;
	return 0;
}