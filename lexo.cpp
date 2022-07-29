// C++ program to find out lexicographic
// rank of a string which may have duplicate
// characters and upper case letters.
#include <iostream>
#include <vector>

using namespace std;

// Function to calculate factorial of a number.
long long fac(long long n)
{
	if (n == 0 or n == 1)
		return 1;
	return n * fac(n - 1);
}

// Function to calculate rank of the string.
int lexRank(string s)
{
	long long n = s.size();
	// Initialize total count to 1.
	long long t_count = 1;

	// loop to calculate number of smaller strings.
	for (int i = 0; i < n; i++)
	{
		// Count smaller characters than s[i].
		int less_than = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (int(s[i]) > int(s[j]))
			{
				less_than += 1;
			}
		}

		// Count frequency of duplicate characters.
		vector<int> d_count(52, 0);

		for (int j = i; j < n; j++)
		{
			// Check whether the character is upper
			// or lower case and then increase the
			// specific element of the array.
			if ((int(s[j]) >= 'A') && int(s[j]) <= 'Z')
				d_count[int(s[j]) - 'A'] += 1;
			else
				d_count[int(s[j]) - 'a' + 26] += 1;
		}

		// Compute the product of the factorials
		// of frequency of characters.
		long long d_fac = 1;
		for (int ele : d_count)
			d_fac *= fac(ele);

		// add the number of smaller string
		// possible from index i to total count.
		t_count += (fac(n - i - 1) * less_than) / d_fac;
	}

	return (int)t_count;
}

// Driver Code
int main()
{
	// Test case 1
	string s1 = "take";
	cout << "Rank of " << s1 << " is: " << lexRank(s1)
		<< endl;

	// Test case 2
	string s2 = "asdfg";
	cout << "Rank of " << s2 << " is: " << lexRank(s2)
		<< endl;

	return 0;
}
