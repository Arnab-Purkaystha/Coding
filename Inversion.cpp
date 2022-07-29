// C++ program to Count Inversions
// in an input2ay
#include <bits/stdc++.h>
using namespace std;

int getInvCount(int input2[], int input1)
{
	int inv_count = 0;
	for (int i = 0; i < input1 - 1; i++)
		for (int j = i + 1; j < input1; j++)
			if (input2[i] > input2[j])
				inv_count++;

	return inv_count;
}

// Driver Code
int main()
{
	int input2[] = { 41,18467,6334,26500,19169};
	int n = sizeof(input2) / sizeof(input2[0]);
	cout << " Number of inversions are "
		<< getInvCount(input2, n);
	return 0;
}

