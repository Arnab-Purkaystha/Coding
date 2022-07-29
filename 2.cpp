#include <bits/stdc++.h>
#include <vector>

using namespace std;

long long factorial(long long n)
{
	if (n == 0 or n == 1)
		return 1;
	return n * factorial(n - 1);
}

int stringRank(string s)
{
	long long n = s.size();
	long long total_cnt = 1;

	for (int i = 0; i < n; i++)
	{
		int small = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (int(s[i]) > int(s[j]))
			{
				small += 1;
			}
		}

		vector<int> duplicate(52, 0);

		for (int j = i; j < n; j++)
		{
			if ((int(s[j]) >= 'A') && int(s[j]) <= 'Z')
				duplicate[int(s[j]) - 'A'] += 1;
			else
				duplicate[int(s[j]) - 'a' + 26] += 1;
		}
		long long prod = 1;
		for (int ele : duplicate)
			prod *= factorial(ele);

		total_cnt += (factorial(n - i - 1) * small) / prod;
	}

	return (int)total_cnt;
}

int main()
{
    string s1;
    cin>>s1;
    cout<<stringRank(s1);
	return 0;
}
