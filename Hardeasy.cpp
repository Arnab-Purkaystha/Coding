#include <bits/stdc++.h>
using namespace std;
string diff(int arr[], int low, int high, int data)
{

    if (low > high)
    {

        return "easy";
    }

    int mid = low + (high - low) / 2;
    if (arr[mid] == data)
    {

        return "hard";
    }

    else if (arr[mid] > data)
        return diff(arr, low, mid - 1, data);
    return diff(arr, mid + 1, high, data);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        int data = 1;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << diff(arr, 0, n - 1, data);
    }
    // write your code here

    return 0;
}