#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int i, n, a, sum = 0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (a = 0; a < n; a++)
        {
            sum += arr[a];
        }
        cout << sum;
        cout << endl;
    }
    return 0;
}