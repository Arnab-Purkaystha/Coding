#include <bits/stdc++.h>
using namespace std;

int factorial( int n)
{
    long long  int f;
    if(n > 1)
    {f= n * factorial(n - 1);
    return f;}
    else
        return 1;
}

int main()
{
     int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << factorial(n);
        cout << endl;
    }

    // write your code here

    return 0;
}
