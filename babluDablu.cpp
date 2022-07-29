#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0;
        cin >> n;
        x = n % 8;
        switch (x)
        {
        case 0:
            cout << n - 1 << "SL" << endl;
            break;
        case 1:
            cout << n + 3 << "LB" << endl;
            break;
        case 2:
            cout << n + 3 << "MB" << endl;
            break;
        case 3:
            cout << n + 3 << "UB" << endl;
            break;
        case 4:
            cout << n - 3 << "LB" << endl;
            break;
        case 5:
            cout << n - 3 << "MB" << endl;
            break;
        case 6:
            cout << n - 3 << "UB" << endl;
            break;
        case 7:
            cout << n - 3 << "SU" << endl;
            break;
        }
    }
    return 0;
}