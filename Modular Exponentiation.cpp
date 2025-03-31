#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) 
{
	long long ans=1;
	x = x%m;
	while(n>0)
	{
		if(n%2 != 0) //n is odd
			ans = (1LL*ans*x) % m;
	    x = (1LL*x*x) % m;
		n /= 2;
	}
	return ans;
}
