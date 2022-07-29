#include <bits/stdc++.h>
using namespace std;
int isRight(long long a, long long b, long long c)
{
	if (a <= 0 || b <= 0 || c <= 0)
		return 0;

	vector<long long> arr{ a, b, c };
	sort(arr.begin(), arr.end());

	a = arr[0], b = arr[1], c = arr[2];

	if (a + b <= c)
		return 0;

	long long p1 = a, p2 = c - b;

	long long div = __gcd(p1, p2);
	p1 /= div, p2 /= div;

	long long q1 = c + b, q2 = a;

	div = __gcd(q1, q2);
	q1 /= div, q2 /= div;

	return (p1 == q1 && p2 == q2);
}



int main()
{
	long long a = 4, b = 3, c = 5;
	cout << isRight(a, b, c) << endl;

	a = 8, b = 13, c = 5;
	cout << isRight(a, b, c) << endl;

	a = 1200000000000, b = 1600000000000,
	c = 2000000000000;
	cout << isRight(a, b, c) << endl;

	return 0;
}
