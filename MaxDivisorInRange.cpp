#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int maxDivisorRange(int a, int b, int l, int h)
{
	int g = gcd(a, b);
	int res = -1;
	for (int i = l;  i <= h; i++)
		if (g % i == 0)
			res = max({res, i, g / i});
	
	return res;
}

int main()
{
	int a,b,l,h;
    cin>>a>>b;
    int q;
    cin>>q;
    while(q--)
    {cin>>l>>h;
	cout << maxDivisorRange(a, b, l, h) << endl;}
	return 0;
}
