#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m;j++)
            cin>>arr[i][j];
    }
    for (int i = 0; i < n; i++) {

		int startcol = i, startrow = 0;

		while (startcol >= 0 && startrow < n) {
			cout << arr[startrow][startcol] << " ";

			startcol--;

			startrow++;
		}
	}

	for (int i = 1; i < n; i++) {
		int startrow = i, startcol = n - 1;

		while (startrow < n && startcol >= 0) {
			cout << arr[startrow][startcol] << " ";

			startcol--;

			startrow++;
		}
	}
    return 0;
}